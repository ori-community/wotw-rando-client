#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StringCageMetaData {
    IL2CPP_REGISTER_METHOD(0x00670E00, void, OnEnable, (app::StringCageMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00670FB0, void, OnDisable, (app::StringCageMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00671160, void, FaceAdded, (app::StringCageMetaData * this_ptr, app::CageStructureTool_Face * face))
    IL2CPP_REGISTER_METHODINFO(0x0471F4A8, StringCageMetaData_FaceAdded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006712A0, void, ctor, (app::StringCageMetaData * this_ptr))
}
