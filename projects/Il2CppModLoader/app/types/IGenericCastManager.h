#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGenericCastManager {
        inline app::IGenericCastManager__Class** type_info = (app::IGenericCastManager__Class**)(modloader::win::memory::resolve_rva(0x0470D630));
        inline app::IGenericCastManager__Class* get_class() {
            return il2cpp::get_class<app::IGenericCastManager__Class>(type_info, "", "IGenericCastManager");
        }
    } // namespace IGenericCastManager
} // namespace app::classes::types
