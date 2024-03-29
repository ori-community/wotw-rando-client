#pragma once
#include <Modloader/app/structs/AkCommonOutputSettings_ChannelConfiguration.h>
#include <Modloader/app/structs/AkCommonOutputSettings_ChannelConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings_ChannelConfiguration {
        inline app::AkCommonOutputSettings_ChannelConfiguration__Class** type_info() {
            static app::AkCommonOutputSettings_ChannelConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkCommonOutputSettings_ChannelConfiguration__Class**)(modloader::win::memory::resolve_rva(0x0472F638));
            }
            return cache;
        }
        inline app::AkCommonOutputSettings_ChannelConfiguration__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonOutputSettings_ChannelConfiguration__Class>(type_info(), "", "AkCommonOutputSettings", "ChannelConfiguration");
        }
        inline app::AkCommonOutputSettings_ChannelConfiguration* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings_ChannelConfiguration>(get_class());
        }
    } // namespace AkCommonOutputSettings_ChannelConfiguration
} // namespace app::classes::types
