#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISponsor {
        inline app::ISponsor__Class** type_info = (app::ISponsor__Class**)(modloader::win::memory::resolve_rva(0x04747F80));
        inline app::ISponsor__Class* get_class() {
            return il2cpp::get_class<app::ISponsor__Class>(type_info, "System.Runtime.Remoting.Lifetime", "ISponsor");
        }
    } // namespace ISponsor
} // namespace app::classes::types
