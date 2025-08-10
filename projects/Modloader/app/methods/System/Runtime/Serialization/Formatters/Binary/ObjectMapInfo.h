#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectMapInfo.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo {
    IL2CPP_REGISTER_METHOD(
        0x01D94340,
        void,
        ctor,
        app::ObjectMapInfo* this_ptr,
        int32_t object_id,
        int32_t num_members,
        app::String__Array* member_names,
        app::Type__Array* member_types
    )
    IL2CPP_REGISTER_METHOD(
        0x01D94360,
        bool,
        isCompatible,
        app::ObjectMapInfo* this_ptr,
        int32_t num_members,
        app::String__Array* member_names,
        app::Type__Array* member_types
    )
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo
