#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Linq::JPropertyKeyedCollection {
    IL2CPP_REGISTER_METHOD(0x01F0EA40, void, ctor, (app::JPropertyKeyedCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0EBB0, void, AddKey, (app::JPropertyKeyedCollection * this_ptr, app::String* key, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0EC80, void, ClearItems, (app::JPropertyKeyedCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0ED60, bool, Contains, (app::JPropertyKeyedCollection * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x04769460, JPropertyKeyedCollection_Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F0EE60, void, EnsureDictionary, (app::JPropertyKeyedCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0F010, app::String*, GetKeyForItem, (app::JPropertyKeyedCollection * this_ptr, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0F120, void, InsertItem, (app::JPropertyKeyedCollection * this_ptr, int32_t index, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0F220, void, RemoveItem, (app::JPropertyKeyedCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01F0F320, void, RemoveKey, (app::JPropertyKeyedCollection * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x01F0F3C0, void, SetItem, (app::JPropertyKeyedCollection * this_ptr, int32_t index, app::JToken* item))
    IL2CPP_REGISTER_METHOD(0x01F0F5A0, bool, TryGetValue, (app::JPropertyKeyedCollection * this_ptr, app::String* key, app::JToken** value))
    IL2CPP_REGISTER_METHOD(0x01F0F660, app::ICollection_1_System_String_*, get_Keys, (app::JPropertyKeyedCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F0F700, int32_t, IndexOfReference, (app::JPropertyKeyedCollection * this_ptr, app::JToken* t))
    IL2CPP_REGISTER_METHOD(0x01F0F850, void, cctor, ())
} // namespace app::classes::Newtonsoft::Json::Linq::JPropertyKeyedCollection
