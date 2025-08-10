#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageFaceMetaData_1_System_Single_.h>
#include <Modloader/app/structs/CageStructureTool_Face.h>

namespace app::classes::CageFaceMetaData_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x019DA540, void, ctor, app::CageFaceMetaData_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DB730, void, OnEnable, app::CageFaceMetaData_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DB910, void, OnDisable, app::CageFaceMetaData_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DBAF0, void, Reset, app::CageFaceMetaData_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DBB80, void, FillData, app::CageFaceMetaData_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAddFace, app::CageFaceMetaData_1_System_Single_* this_ptr, app::CageStructureTool_Face* face)
    IL2CPP_REGISTER_METHOD(0x019DA500, void, OnRemoveFace, app::CageFaceMetaData_1_System_Single_* this_ptr, app::CageStructureTool_Face* face)
} // namespace app::classes::CageFaceMetaData_1_System_Single_
