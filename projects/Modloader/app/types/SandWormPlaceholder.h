#pragma once
#include <Modloader/app/structs/SandWormPlaceholder.h>
#include <Modloader/app/structs/SandWormPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormPlaceholder {
        inline app::SandWormPlaceholder__Class** type_info() {
            static app::SandWormPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SandWormPlaceholder__Class>(type_info(), "", "SandWormPlaceholder");
        }
        inline app::SandWormPlaceholder* create() {
            return il2cpp::create_object<app::SandWormPlaceholder>(get_class());
        }
    } // namespace SandWormPlaceholder
} // namespace app::classes::types
