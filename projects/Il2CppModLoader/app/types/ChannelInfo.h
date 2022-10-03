#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChannelInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChannelInfo__Class** type_info;
        inline app::ChannelInfo__Class* get_class() {
            return il2cpp::get_class<app::ChannelInfo__Class>(type_info, "System.Runtime.Remoting", "ChannelInfo");
        }
        inline app::ChannelInfo* create() {
            return il2cpp::create_object<app::ChannelInfo>(get_class());
        }
    } // namespace ChannelInfo
} // namespace app::classes::types
