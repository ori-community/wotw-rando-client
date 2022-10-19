#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberSpawnManager {
        inline app::UberSpawnManager__Class** type_info = (app::UberSpawnManager__Class**)(modloader::win::memory::resolve_rva(0x0476C600));
        inline app::UberSpawnManager__Class* get_class() {
            return il2cpp::get_class<app::UberSpawnManager__Class>(type_info, "", "UberSpawnManager");
        }
        inline app::UberSpawnManager* create() {
            return il2cpp::create_object<app::UberSpawnManager>(get_class());
        }
    } // namespace UberSpawnManager
} // namespace app::classes::types
