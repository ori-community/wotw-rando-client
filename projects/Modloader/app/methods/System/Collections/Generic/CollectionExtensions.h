#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IReadOnlyDictionary_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/IReadOnlyDictionary_2_System_String_System_LocalDataStoreSlot_.h>
#include <Modloader/app/structs/LocalDataStoreSlot.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::CollectionExtensions {
    IL2CPP_REGISTER_METHOD(0x01567630, app::Object*, GetValueOrDefault_1, (app::IReadOnlyDictionary_2_System_Object_System_Object_ * dictionary, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x01583EE0, app::Object*, GetValueOrDefault_2, (app::IReadOnlyDictionary_2_System_Object_System_Object_ * dictionary, app::Object* key, app::Object* default_value))
    IL2CPP_REGISTER_METHOD(0x01567630, app::LocalDataStoreSlot*, GetValueOrDefault_3, (app::IReadOnlyDictionary_2_System_String_System_LocalDataStoreSlot_ * dictionary, app::String* key))
} // namespace app::classes::System::Collections::Generic::CollectionExtensions
