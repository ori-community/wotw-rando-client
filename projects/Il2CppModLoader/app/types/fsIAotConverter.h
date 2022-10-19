#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsIAotConverter {
        inline app::fsIAotConverter__Class** type_info = (app::fsIAotConverter__Class**)(modloader::win::memory::resolve_rva(0x04783DC0));
        inline app::fsIAotConverter__Class* get_class() {
            return il2cpp::get_class<app::fsIAotConverter__Class>(type_info, "FullSerializer", "fsIAotConverter");
        }
    } // namespace fsIAotConverter
} // namespace app::classes::types
