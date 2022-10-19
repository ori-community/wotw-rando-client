#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContributeEnvoySink {
        inline app::IContributeEnvoySink__Class** type_info = (app::IContributeEnvoySink__Class**)(modloader::win::memory::resolve_rva(0x04718BF8));
        inline app::IContributeEnvoySink__Class* get_class() {
            return il2cpp::get_class<app::IContributeEnvoySink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeEnvoySink");
        }
    } // namespace IContributeEnvoySink
} // namespace app::classes::types
