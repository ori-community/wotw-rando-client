#pragma once
#include <Modloader/app/structs/ComboSystem.h>
#include <Modloader/app/structs/ComboSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComboSystem {
        inline app::ComboSystem__Class** type_info() {
            static app::ComboSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComboSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComboSystem__Class* get_class() {
            return il2cpp::get_class<app::ComboSystem__Class>(type_info(), "Moon.ComboSystem", "ComboSystem");
        }
        inline app::ComboSystem* create() {
            return il2cpp::create_object<app::ComboSystem>(get_class());
        }
    } // namespace ComboSystem
} // namespace app::classes::types
