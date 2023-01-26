#pragma once
#include <Modloader/app/structs/AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum.h>
#include <Modloader/app/structs/AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum {
        inline app::AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Class** type_info() {
            static app::AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Class>(type_info(), "", "AkCommonOutputSettings+ChannelConfiguration", "ChannelConfigType");
        }
        inline app::AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum>(get_class());
        }
    } // namespace AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum
} // namespace app::classes::types
