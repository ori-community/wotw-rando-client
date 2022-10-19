#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerSpec {
        inline app::PointerSpec__Class** type_info = (app::PointerSpec__Class**)(modloader::win::memory::resolve_rva(0x04712750));
        inline app::PointerSpec__Class* get_class() {
            return il2cpp::get_class<app::PointerSpec__Class>(type_info, "System", "PointerSpec");
        }
        inline app::PointerSpec* create() {
            return il2cpp::create_object<app::PointerSpec>(get_class());
        }
    } // namespace PointerSpec
} // namespace app::classes::types
