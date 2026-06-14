#pragma once
#include <Modloader/app/structs/MaskedValueBar.h>
#include <Modloader/app/structs/MaskedValueBar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskedValueBar {
        inline app::MaskedValueBar__Class** type_info() {
            static app::MaskedValueBar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskedValueBar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskedValueBar__Class* get_class() {
            return il2cpp::get_class<app::MaskedValueBar__Class>(type_info(), "", "MaskedValueBar");
        }
        inline app::MaskedValueBar* create() {
            return il2cpp::create_object<app::MaskedValueBar>(get_class());
        }
    } // namespace MaskedValueBar
} // namespace app::classes::types
