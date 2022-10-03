#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::TentacleAttackMetadata {
    IL2CPP_REGISTER_METHOD(0x010ACCF0, void, OnEnable, (app::TentacleAttackMetadata * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010ACEC0, void, OnDisable, (app::TentacleAttackMetadata * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AD070, void, Reset, (app::TentacleAttackMetadata * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010AD170, void, FaceAdded, (app::TentacleAttackMetadata * this_ptr, app::CageStructureTool_Face* face))
    IL2CPP_REGISTER_METHODINFO(0x047977F8, TentacleAttackMetadata_FaceAdded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010AD350, void, ctor, (app::TentacleAttackMetadata * this_ptr))
} // namespace app::classes::Moon::TentacleAttackMetadata
