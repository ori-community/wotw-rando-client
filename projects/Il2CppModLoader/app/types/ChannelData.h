#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChannelData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChannelData__Class** type_info;
        inline app::ChannelData__Class* get_class() {
            return il2cpp::get_class<app::ChannelData__Class>(type_info, "System.Runtime.Remoting", "ChannelData");
        }
        inline app::ChannelData* create() {
            return il2cpp::create_object<app::ChannelData>(get_class());
        }
    } // namespace ChannelData
} // namespace app::classes::types
