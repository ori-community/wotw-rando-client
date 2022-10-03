#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings_ChannelConfiguration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCommonOutputSettings_ChannelConfiguration__Class** type_info;
        inline app::AkCommonOutputSettings_ChannelConfiguration__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonOutputSettings_ChannelConfiguration__Class>(type_info, "", "AkCommonOutputSettings", "ChannelConfiguration");
        }
        inline app::AkCommonOutputSettings_ChannelConfiguration* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings_ChannelConfiguration>(get_class());
        }
    } // namespace AkCommonOutputSettings_ChannelConfiguration
} // namespace app::classes::types
