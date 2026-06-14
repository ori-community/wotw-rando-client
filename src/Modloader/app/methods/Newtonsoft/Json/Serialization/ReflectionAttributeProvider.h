#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReflectionAttributeProvider.h>

namespace app::classes::Newtonsoft::Json::Serialization::ReflectionAttributeProvider {
    IL2CPP_REGISTER_METHOD(0x01BFB7C0, void, ctor, app::ReflectionAttributeProvider* this_ptr, app::Object* attribute_provider)
}
