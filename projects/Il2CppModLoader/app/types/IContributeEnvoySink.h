#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContributeEnvoySink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContributeEnvoySink__Class** type_info;
        inline app::IContributeEnvoySink__Class* get_class() {
            return il2cpp::get_class<app::IContributeEnvoySink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeEnvoySink");
        }
    } // namespace IContributeEnvoySink
} // namespace app::classes::types
