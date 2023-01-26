#pragma once
#include <Modloader/app/structs/GaussianBlur.h>
#include <Modloader/app/structs/GaussianBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GaussianBlur {
        inline app::GaussianBlur__Class** type_info() {
            static app::GaussianBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GaussianBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GaussianBlur__Class* get_class() {
            return il2cpp::get_class<app::GaussianBlur__Class>(type_info(), "Colorful", "GaussianBlur");
        }
        inline app::GaussianBlur* create() {
            return il2cpp::create_object<app::GaussianBlur>(get_class());
        }
    } // namespace GaussianBlur
} // namespace app::classes::types
