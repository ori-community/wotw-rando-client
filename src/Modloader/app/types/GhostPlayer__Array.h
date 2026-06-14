#pragma once
#include <Modloader/app/structs/GhostPlayer__Array.h>
#include <Modloader/app/structs/GhostPlayer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostPlayer__Array {
        inline app::GhostPlayer__Array__Class** type_info() {
            static app::GhostPlayer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostPlayer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostPlayer__Array__Class* get_class() {
            return il2cpp::get_class<app::GhostPlayer__Array__Class>(type_info(), "", "GhostPlayer[]");
        }
        inline app::GhostPlayer__Array* create() {
            return il2cpp::create_object<app::GhostPlayer__Array>(get_class());
        }
    } // namespace GhostPlayer__Array
} // namespace app::classes::types
