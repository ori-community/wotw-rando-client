#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/DelegateSerializationHolder_DelegateEntry.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::DelegateSerializationHolder_DelegateEntry {
    IL2CPP_REGISTER_METHOD(0x01740800, void, ctor, app::DelegateSerializationHolder_DelegateEntry* this_ptr, app::Delegate* del, app::String* target_label)
    IL2CPP_REGISTER_METHOD(
        0x017409E0,
        app::Delegate*,
        DeserializeDelegate,
        app::DelegateSerializationHolder_DelegateEntry* this_ptr,
        app::SerializationInfo* info,
        int32_t index
    )
} // namespace app::classes::System::DelegateSerializationHolder_DelegateEntry
