#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageFaceMetaData_1_System_Int32Enum_.h>
#include <Modloader/app/structs/CageStructureTool_Face.h>

namespace app::classes::CageFaceMetaData_1_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x019DA570, void, OnEnable, (app::CageFaceMetaData_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DA750, void, OnDisable, (app::CageFaceMetaData_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DA930, void, Reset, (app::CageFaceMetaData_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DA9C0, void, FillData, (app::CageFaceMetaData_1_System_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAddFace, (app::CageFaceMetaData_1_System_Int32Enum_ * this_ptr, app::CageStructureTool_Face* face))
    IL2CPP_REGISTER_METHOD(0x019DA500, void, OnRemoveFace, (app::CageFaceMetaData_1_System_Int32Enum_ * this_ptr, app::CageStructureTool_Face* face))
    IL2CPP_REGISTER_METHOD(0x019DA540, void, ctor, (app::CageFaceMetaData_1_System_Int32Enum_ * this_ptr))
} // namespace app::classes::CageFaceMetaData_1_System_Int32Enum_
