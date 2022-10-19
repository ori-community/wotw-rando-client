#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings_ChannelConfiguration {
        inline app::AkCommonOutputSettings_ChannelConfiguration__Class** type_info = (app::AkCommonOutputSettings_ChannelConfiguration__Class**)(modloader::win::memory::resolve_rva(0x0472F638));
        inline app::AkCommonOutputSettings_ChannelConfiguration__Class* get_class() {
            return il2cpp::get_nested_class<app::AkCommonOutputSettings_ChannelConfiguration__Class>(type_info, "", "AkCommonOutputSettings", "ChannelConfiguration");
        }
        inline app::AkCommonOutputSettings_ChannelConfiguration* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings_ChannelConfiguration>(get_class());
        }
    } // namespace AkCommonOutputSettings_ChannelConfiguration
} // namespace app::classes::types
