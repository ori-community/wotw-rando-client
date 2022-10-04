#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISecurableChannel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISecurableChannel__Class** type_info;
        inline app::ISecurableChannel__Class* get_class() {
            return il2cpp::get_class<app::ISecurableChannel__Class>(type_info, "System.Runtime.Remoting.Channels", "ISecurableChannel");
        }
    } // namespace ISecurableChannel
} // namespace app::classes::types
