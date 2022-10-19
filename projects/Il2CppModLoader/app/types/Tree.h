#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tree {
        inline app::Tree__Class** type_info = (app::Tree__Class**)(modloader::win::memory::resolve_rva(0x04779398));
        inline app::Tree__Class* get_class() {
            return il2cpp::get_class<app::Tree__Class>(type_info, "Ionic.Zlib", "Tree");
        }
        inline app::Tree* create() {
            return il2cpp::create_object<app::Tree>(get_class());
        }
    } // namespace Tree
} // namespace app::classes::types
