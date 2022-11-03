#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NegativeScaleFixer {
    IL2CPP_REGISTER_METHOD(0x0088AD00, app::Transform*, GetCauseOfNegativeGlobalScale, (app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x0088AE50, bool, HasNegativeScale, (app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x0088AFA0, void, Fix, (app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x0088C190, void, FlipMesh, (app::Mesh * shared_mesh, app::Vector3 mesh_flip_multiplier))
    IL2CPP_REGISTER_METHOD(0x0088C3B0, void, AddChildren, (app::Transform * transform, app::List_1_NegativeScaleFixer_TransformAndWorldMatrix_* transforms_to_update))
} // namespace app::classes::NegativeScaleFixer
