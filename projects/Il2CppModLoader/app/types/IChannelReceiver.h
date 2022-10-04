#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IChannelReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IChannelReceiver__Class** type_info;
        inline app::IChannelReceiver__Class* get_class() {
            return il2cpp::get_class<app::IChannelReceiver__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannelReceiver");
        }
        inline app::IChannelReceiver* create() {
            return il2cpp::create_object<app::IChannelReceiver>(get_class());
        }
    } // namespace IChannelReceiver
} // namespace app::classes::types
