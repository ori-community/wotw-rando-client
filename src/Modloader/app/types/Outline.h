#pragma once
#include <Modloader/app/structs/Outline.h>
#include <Modloader/app/structs/Outline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Outline {
        inline app::Outline__Class** type_info() {
            static app::Outline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Outline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Outline__Class* get_class() {
            return il2cpp::get_class<app::Outline__Class>(type_info(), "UnityEngine.UI", "Outline");
        }
        inline app::Outline* create() {
            return il2cpp::create_object<app::Outline>(get_class());
        }
    } // namespace Outline
} // namespace app::classes::types
