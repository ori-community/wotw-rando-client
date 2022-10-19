#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StaticTree {
        inline app::StaticTree__Class** type_info = (app::StaticTree__Class**)(modloader::win::memory::resolve_rva(0x04776748));
        inline app::StaticTree__Class* get_class() {
            return il2cpp::get_class<app::StaticTree__Class>(type_info, "Ionic.Zlib", "StaticTree");
        }
        inline app::StaticTree* create() {
            return il2cpp::create_object<app::StaticTree>(get_class());
        }
    } // namespace StaticTree
} // namespace app::classes::types
