#pragma once
#include <Modloader/app/structs/OnScreenPositionSetter.h>
#include <Modloader/app/structs/OnScreenPositionSetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnScreenPositionSetter {
        inline app::OnScreenPositionSetter__Class** type_info() {
            static app::OnScreenPositionSetter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnScreenPositionSetter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnScreenPositionSetter__Class* get_class() {
            return il2cpp::get_class<app::OnScreenPositionSetter__Class>(type_info(), "", "OnScreenPositionSetter");
        }
        inline app::OnScreenPositionSetter* create() {
            return il2cpp::create_object<app::OnScreenPositionSetter>(get_class());
        }
    } // namespace OnScreenPositionSetter
} // namespace app::classes::types
