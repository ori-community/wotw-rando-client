#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IMethodMessage.h>
#include <Modloader/app/structs/MessageDictionary.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Runtime::Remoting::Messaging::MessageDictionary {
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor, app::MessageDictionary* this_ptr, app::IMethodMessage* message)
    IL2CPP_REGISTER_METHOD(0x02312630, bool, HasUserData, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02312750, app::IDictionary*, get_InternalDictionary, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_MethodKeys, app::MessageDictionary* this_ptr, app::String__Array* value)
    IL2CPP_REGISTER_METHOD(0x02312850, app::IDictionary*, AllocInternalProperties, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023129A0, app::IDictionary*, GetInternalProperties, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023129D0, bool, IsOverridenKey, app::MessageDictionary* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFixedSize, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsReadOnly, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02312A70, app::Object*, get_Item, app::MessageDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02312BF0, void, set_Item, app::MessageDictionary* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02312C00, app::Object*, GetMethodProperty, app::MessageDictionary* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x02313070, void, SetMethodProperty, app::MessageDictionary* this_ptr, app::String* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02313280, app::ICollection*, get_Keys, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023136A0, app::ICollection*, get_Values, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02313AE0, void, Add, app::MessageDictionary* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02313CA0, void, Clear, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02313D30, bool, Contains, app::MessageDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02313EA0, void, Remove, app::MessageDictionary* this_ptr, app::Object* key)
    IL2CPP_REGISTER_METHOD(0x02314030, int32_t, get_Count, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, get_SyncRoot, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023140F0, void, CopyTo, app::MessageDictionary* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x023141A0, app::IEnumerator*, IEnumerable_GetEnumerator, app::MessageDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023142F0, app::IDictionaryEnumerator*, GetEnumerator, app::MessageDictionary* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Messaging::MessageDictionary
