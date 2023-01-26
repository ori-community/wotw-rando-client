#pragma once
#include <Modloader/app/structs/FadeOut.h>
#include <Modloader/app/structs/FadeOut__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FadeOut {
        inline app::FadeOut__Class** type_info() {
            static app::FadeOut__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FadeOut__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FadeOut__Class* get_class() {
            return il2cpp::get_class<app::FadeOut__Class>(type_info(), "", "FadeOut");
        }
        inline app::FadeOut* create() {
            return il2cpp::create_object<app::FadeOut>(get_class());
        }
    } // namespace FadeOut
} // namespace app::classes::types
