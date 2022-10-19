#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITilemap {
        inline app::ITilemap__Class** type_info = (app::ITilemap__Class**)(modloader::win::memory::resolve_rva(0x0475C5A8));
        inline app::ITilemap__Class* get_class() {
            return il2cpp::get_class<app::ITilemap__Class>(type_info, "UnityEngine.Tilemaps", "ITilemap");
        }
        inline app::ITilemap* create() {
            return il2cpp::create_object<app::ITilemap>(get_class());
        }
    } // namespace ITilemap
} // namespace app::classes::types
