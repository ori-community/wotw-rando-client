#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetworkInformationException {
        inline app::NetworkInformationException__Class** type_info = (app::NetworkInformationException__Class**)(modloader::win::memory::resolve_rva(0x04759CD8));
        inline app::NetworkInformationException__Class* get_class() {
            return il2cpp::get_class<app::NetworkInformationException__Class>(type_info, "System.Net.NetworkInformation", "NetworkInformationException");
        }
        inline app::NetworkInformationException* create() {
            return il2cpp::create_object<app::NetworkInformationException>(get_class());
        }
    } // namespace NetworkInformationException
} // namespace app::classes::types
