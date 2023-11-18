#pragma once
#include <Modloader/app/structs/OnSeinNearEnter.h>
#include <Modloader/app/structs/OnSeinNearEnter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnSeinNearEnter {
        inline app::OnSeinNearEnter__Class** type_info() {
            static app::OnSeinNearEnter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnSeinNearEnter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnSeinNearEnter__Class* get_class() {
            return il2cpp::get_class<app::OnSeinNearEnter__Class>(type_info(), "fsm.triggers", "OnSeinNearEnter");
        }
        inline app::OnSeinNearEnter* create() {
            return il2cpp::create_object<app::OnSeinNearEnter>(get_class());
        }
    } // namespace OnSeinNearEnter
} // namespace app::classes::types
