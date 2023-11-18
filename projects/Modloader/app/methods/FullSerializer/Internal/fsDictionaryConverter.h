#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsDictionaryConverter.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsData.h>
#include <Modloader/app/structs/fsResult.h>

namespace app::classes::FullSerializer::Internal::fsDictionaryConverter {
    IL2CPP_REGISTER_METHOD(0x01653170, bool, CanProcess, (app::fsDictionaryConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01653240, app::Object*, CreateInstance, (app::fsDictionaryConverter * this_ptr, app::fsData* data, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01653320, app::fsResult, TryDeserialize, (app::fsDictionaryConverter * this_ptr, app::fsData* data, app::Object** instance_, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01653CF0, app::fsResult, TrySerialize, (app::fsDictionaryConverter * this_ptr, app::Object* instance_, app::fsData** serialized, app::Type* storage_type))
    IL2CPP_REGISTER_METHOD(0x01654750, app::fsResult, AddItemToDictionary, (app::fsDictionaryConverter * this_ptr, app::IDictionary* dictionary, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01654B30, void, GetKeyValueTypes, (app::Type * dictionary_type, app::Type** key_storage_type, app::Type** value_storage_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsDictionaryConverter * this_ptr))
} // namespace app::classes::FullSerializer::Internal::fsDictionaryConverter
