#pragma once
#include <Modloader/app/structs/SeinEntanglingRootsSpell.h>
#include <Modloader/app/structs/SeinEntanglingRootsSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEntanglingRootsSpell {
        inline app::SeinEntanglingRootsSpell__Class** type_info() {
            static app::SeinEntanglingRootsSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEntanglingRootsSpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEntanglingRootsSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinEntanglingRootsSpell__Class>(type_info(), "", "SeinEntanglingRootsSpell");
        }
        inline app::SeinEntanglingRootsSpell* create() {
            return il2cpp::create_object<app::SeinEntanglingRootsSpell>(get_class());
        }
    } // namespace SeinEntanglingRootsSpell
} // namespace app::classes::types
