#pragma once
#include <Modloader/app/structs/GhostIndicator.h>
#include <Modloader/app/structs/GhostIndicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostIndicator {
        inline app::GhostIndicator__Class** type_info() {
            static app::GhostIndicator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GhostIndicator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GhostIndicator__Class* get_class() {
            return il2cpp::get_class<app::GhostIndicator__Class>(type_info(), "", "GhostIndicator");
        }
        inline app::GhostIndicator* create() {
            return il2cpp::create_object<app::GhostIndicator>(get_class());
        }
    } // namespace GhostIndicator
} // namespace app::classes::types
