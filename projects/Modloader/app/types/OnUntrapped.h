#pragma once
#include <Modloader/app/structs/OnUntrapped.h>
#include <Modloader/app/structs/OnUntrapped__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnUntrapped {
        inline app::OnUntrapped__Class** type_info() {
            static app::OnUntrapped__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnUntrapped__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnUntrapped__Class* get_class() {
            return il2cpp::get_class<app::OnUntrapped__Class>(type_info(), "fsm.triggers", "OnUntrapped");
        }
        inline app::OnUntrapped* create() {
            return il2cpp::create_object<app::OnUntrapped>(get_class());
        }
    } // namespace OnUntrapped
} // namespace app::classes::types
