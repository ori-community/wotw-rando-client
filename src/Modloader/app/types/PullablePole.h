#pragma once
#include <Modloader/app/structs/PullablePole.h>
#include <Modloader/app/structs/PullablePole__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PullablePole {
        inline app::PullablePole__Class** type_info() {
            static app::PullablePole__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PullablePole__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PullablePole__Class* get_class() {
            return il2cpp::get_class<app::PullablePole__Class>(type_info(), "Game", "PullablePole");
        }
        inline app::PullablePole* create() {
            return il2cpp::create_object<app::PullablePole>(get_class());
        }
    } // namespace PullablePole
} // namespace app::classes::types
