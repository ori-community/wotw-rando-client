#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISoundHost {
        inline app::ISoundHost__Class** type_info = (app::ISoundHost__Class**)(modloader::win::memory::resolve_rva(0x04712578));
        inline app::ISoundHost__Class* get_class() {
            return il2cpp::get_class<app::ISoundHost__Class>(type_info, "Moon.Wwise", "ISoundHost");
        }
    } // namespace ISoundHost
} // namespace app::classes::types
