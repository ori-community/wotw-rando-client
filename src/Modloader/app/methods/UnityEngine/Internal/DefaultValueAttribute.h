#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultValueAttribute_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Internal::DefaultValueAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DefaultValueAttribute_1* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::Object*, get_Value, app::DefaultValueAttribute_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0252DA80, bool, Equals, app::DefaultValueAttribute_1* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0252DB90, int32_t, GetHashCode, app::DefaultValueAttribute_1* this_ptr)
} // namespace app::classes::UnityEngine::Internal::DefaultValueAttribute
