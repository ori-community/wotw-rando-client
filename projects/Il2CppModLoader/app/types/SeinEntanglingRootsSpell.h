#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEntanglingRootsSpell {
        namespace {
            app::SeinEntanglingRootsSpell__Class* type_info_ref = nullptr;
        }
        app::SeinEntanglingRootsSpell__Class** type_info = &type_info_ref;
        inline app::SeinEntanglingRootsSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinEntanglingRootsSpell__Class>(type_info, "", "SeinEntanglingRootsSpell");
        }
        inline app::SeinEntanglingRootsSpell* create() {
            return il2cpp::create_object<app::SeinEntanglingRootsSpell>(get_class());
        }
    } // namespace SeinEntanglingRootsSpell
} // namespace app::classes::types
