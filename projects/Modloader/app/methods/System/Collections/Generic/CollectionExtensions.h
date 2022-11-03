#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::CollectionExtensions {
    IL2CPP_REGISTER_METHOD(0x01567630, app::Object*, GetValueOrDefault_1, (app::IReadOnlyDictionary_2_System_Object_System_Object_ * dictionary, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01583EE0, app::Object*, GetValueOrDefault_2, (app::IReadOnlyDictionary_2_System_Object_System_Object_ * dictionary, app::Object* key, app::Object* default_value))
    IL2CPP_REGISTER_METHODINFO(0x04718DE0, CollectionExtensions_GetValueOrDefault_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01567630, app::LocalDataStoreSlot*, GetValueOrDefault_3, (app::IReadOnlyDictionary_2_System_String_System_LocalDataStoreSlot_ * dictionary, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x0478DE10, CollectionExtensions_GetValueOrDefault_2__MethodInfo)
} // namespace app::classes::System::Collections::Generic::CollectionExtensions
