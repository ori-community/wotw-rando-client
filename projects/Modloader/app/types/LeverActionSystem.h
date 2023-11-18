#pragma once
#include <Modloader/app/structs/LeverActionSystem.h>
#include <Modloader/app/structs/LeverActionSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverActionSystem {
        inline app::LeverActionSystem__Class** type_info() {
            static app::LeverActionSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeverActionSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeverActionSystem__Class* get_class() {
            return il2cpp::get_class<app::LeverActionSystem__Class>(type_info(), "", "LeverActionSystem");
        }
        inline app::LeverActionSystem* create() {
            return il2cpp::create_object<app::LeverActionSystem>(get_class());
        }
    } // namespace LeverActionSystem
} // namespace app::classes::types
