#pragma once
#include <Modloader/app/structs/Scrollbar.h>
#include <Modloader/app/structs/Scrollbar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Scrollbar {
        inline app::Scrollbar__Class** type_info() {
            static app::Scrollbar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Scrollbar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Scrollbar__Class* get_class() {
            return il2cpp::get_class<app::Scrollbar__Class>(type_info(), "UnityEngine.UI", "Scrollbar");
        }
        inline app::Scrollbar* create() {
            return il2cpp::create_object<app::Scrollbar>(get_class());
        }
    } // namespace Scrollbar
} // namespace app::classes::types
