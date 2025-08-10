#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsData.h>
#include <Modloader/app/structs/fsSerializationCallbackProcessor.h>

namespace app::classes::FullSerializer::Internal::fsSerializationCallbackProcessor {
    IL2CPP_REGISTER_METHOD(0x0165D3F0, bool, CanProcess, app::fsSerializationCallbackProcessor* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0165D4C0, void, OnBeforeSerialize, app::fsSerializationCallbackProcessor* this_ptr, app::Type* storage_type, app::Object* instance)
    IL2CPP_REGISTER_METHOD(
        0x0165D5A0,
        void,
        OnAfterSerialize,
        app::fsSerializationCallbackProcessor* this_ptr,
        app::Type* storage_type,
        app::Object* instance,
        app::fsData** data
    )
    IL2CPP_REGISTER_METHOD(
        0x0165D690,
        void,
        OnBeforeDeserializeAfterInstanceCreation,
        app::fsSerializationCallbackProcessor* this_ptr,
        app::Type* storage_type,
        app::Object* instance,
        app::fsData** data
    )
    IL2CPP_REGISTER_METHOD(
        0x0165D8A0,
        void,
        OnAfterDeserialize,
        app::fsSerializationCallbackProcessor* this_ptr,
        app::Type* storage_type,
        app::Object* instance
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::fsSerializationCallbackProcessor* this_ptr)
} // namespace app::classes::FullSerializer::Internal::fsSerializationCallbackProcessor
