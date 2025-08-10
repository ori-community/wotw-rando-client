#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameCache.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::NameCache {
    IL2CPP_REGISTER_METHOD(0x01D93230, app::Object*, GetCachedValue, app::NameCache* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01D93430, void, SetCachedValue, app::NameCache* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NameCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D93640, void, cctor, )
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::NameCache
