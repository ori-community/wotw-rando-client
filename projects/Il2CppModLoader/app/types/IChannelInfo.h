#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IChannelInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IChannelInfo__Class** type_info;
        inline app::IChannelInfo__Class* get_class() {
            return il2cpp::get_class<app::IChannelInfo__Class>(type_info, "System.Runtime.Remoting", "IChannelInfo");
        }
        inline app::IChannelInfo* create() {
            return il2cpp::create_object<app::IChannelInfo>(get_class());
        }
    } // namespace IChannelInfo
} // namespace app::classes::types
