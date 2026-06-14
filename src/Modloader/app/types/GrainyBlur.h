#pragma once
#include <Modloader/app/structs/GrainyBlur.h>
#include <Modloader/app/structs/GrainyBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrainyBlur {
        inline app::GrainyBlur__Class** type_info() {
            static app::GrainyBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrainyBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrainyBlur__Class* get_class() {
            return il2cpp::get_class<app::GrainyBlur__Class>(type_info(), "Colorful", "GrainyBlur");
        }
        inline app::GrainyBlur* create() {
            return il2cpp::create_object<app::GrainyBlur>(get_class());
        }
    } // namespace GrainyBlur
} // namespace app::classes::types
