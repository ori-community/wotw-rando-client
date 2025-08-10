#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TypeName.h>
#include <Modloader/app/structs/TypeNames_ATypeName.h>

namespace app::classes::System::TypeNames_ATypeName {
    IL2CPP_REGISTER_METHOD(0x027C1720, bool, Equals_1, app::TypeNames_ATypeName* this_ptr, app::TypeName* other)
    IL2CPP_REGISTER_METHOD(0x027C1810, int32_t, GetHashCode, app::TypeNames_ATypeName* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027C1850, bool, Equals_2, app::TypeNames_ATypeName* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TypeNames_ATypeName* this_ptr)
} // namespace app::classes::System::TypeNames_ATypeName
