#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__Class.h>
#include <Modloader/app/structs/AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum {
        namespace {
            inline app::AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__Class** type_info = &type_info_ref;
        inline app::AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__Class>(type_info, "", "AkCommonOutputSettings+ChannelConfiguration", "ChannelMask");
        }
        inline app::AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum>(get_class());
        }
    } // namespace AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum
} // namespace app::classes::types
