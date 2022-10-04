#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IChannelDataStore {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IChannelDataStore__Class** type_info;
        inline app::IChannelDataStore__Class* get_class() {
            return il2cpp::get_class<app::IChannelDataStore__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannelDataStore");
        }
        inline app::IChannelDataStore* create() {
            return il2cpp::create_object<app::IChannelDataStore>(get_class());
        }
    } // namespace IChannelDataStore
} // namespace app::classes::types
