#pragma once
#include <Modloader/app/structs/GhostFrame__Array.h>
#include <Modloader/app/structs/GhostFrame__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostFrame__Array {
        inline app::GhostFrame__Array__Class** type_info() {
            static app::GhostFrame__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostFrame__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostFrame__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostFrame__Array__Class>(type_info(), "", "GhostFrame[]");
        }
        inline app::GhostFrame__Array* create() {
            return il2cpp::create_object<app::GhostFrame__Array>(get_class());
        }
    } // namespace GhostFrame__Array
} // namespace app::classes::types
