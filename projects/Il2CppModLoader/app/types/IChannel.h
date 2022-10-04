#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IChannel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IChannel__Class** type_info;
        inline app::IChannel__Class* get_class() {
            return il2cpp::get_class<app::IChannel__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannel");
        }
        inline app::IChannel* create() {
            return il2cpp::create_object<app::IChannel>(get_class());
        }
    } // namespace IChannel
} // namespace app::classes::types
