#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_.h>
#include <Modloader/app/structs/CageStructureTool_Face.h>

namespace app::classes::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_ {
    IL2CPP_REGISTER_METHOD(0x019D9C10, void, OnEnable, app::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D9DF0, void, OnDisable, app::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D9FD0, void, Reset, app::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DA060, void, FillData, app::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DA540, void, ctor, app::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnAddFace,
        app::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_* this_ptr,
        app::CageStructureTool_Face* face
    )
    IL2CPP_REGISTER_METHOD(
        0x019DA500,
        void,
        OnRemoveFace,
        app::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_* this_ptr,
        app::CageStructureTool_Face* face
    )
} // namespace app::classes::CageFaceMetaData_1_Moon_TentacleStabBehaviour_TentacleAttack_
