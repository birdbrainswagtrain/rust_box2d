b2FrictionJointDef FrictionJointDef_default() {
    return b2FrictionJointDef();
}
void FrictionJointDef_initialize(b2FrictionJointDef* self,
                                 b2Body* body_a, b2Body* body_b,
                                 const b2Vec2* anchor) {
    self->Initialize(body_a, body_b, *anchor);
}

b2Joint* FrictionJoint_as_joint(b2FrictionJoint* self) {
    return static_cast<b2Joint*>(self);
}
b2FrictionJoint* Joint_as_friction_joint(b2Joint* self) {
    return static_cast<b2FrictionJoint*>(self);
}

const b2Vec2* FrictionJoint_get_local_anchor_a(const b2FrictionJoint* self) {
    return &self->GetLocalAnchorA();
}
const b2Vec2* FrictionJoint_get_local_anchor_b(const b2FrictionJoint* self) {
    return &self->GetLocalAnchorB();
}
void FrictionJoint_set_max_force(b2FrictionJoint* self, f32 force) {
    self->SetMaxForce(force);
}
f32 FrictionJoint_get_max_force(const b2FrictionJoint* self) {
    return self->GetMaxForce();
}
void FrictionJoint_set_max_torque(b2FrictionJoint* self, f32 torque) {
    self->SetMaxTorque(torque);
}
f32 FrictionJoint_get_max_torque(const b2FrictionJoint* self) {
    return self->GetMaxTorque();
}

void FrictionJoint_dump(b2FrictionJoint* self) {
    self->Dump();
}
