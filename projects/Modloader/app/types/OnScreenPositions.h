#pragma once
#include <Modloader/app/structs/OnScreenPositions.h>
#include <Modloader/app/structs/OnScreenPositions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnScreenPositions {
        inline app::OnScreenPositions__Class** type_info() {
            static app::OnScreenPositions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnScreenPositions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnScreenPositions__Class* get_class() {
            return il2cpp::get_class<app::OnScreenPositions__Class>(type_info(), "", "OnScreenPositions");
        }
        inline app::OnScreenPositions* create() {
            return il2cpp::create_object<app::OnScreenPositions>(get_class());
        }
    } // namespace OnScreenPositions
} // namespace app::classes::types
