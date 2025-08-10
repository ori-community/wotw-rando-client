#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StaticAccessorAttribute.h>
#include <Modloader/app/structs/StaticAccessorType__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Bindings::StaticAccessorAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_1, app::StaticAccessorAttribute* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor_2, app::StaticAccessorAttribute* this_ptr, app::String* name, app::StaticAccessorType__Enum type)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, app::StaticAccessorAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Type, app::StaticAccessorAttribute* this_ptr, app::StaticAccessorType__Enum value)
} // namespace app::classes::UnityEngine::Bindings::StaticAccessorAttribute
