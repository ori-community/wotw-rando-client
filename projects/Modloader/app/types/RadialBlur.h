#pragma once
#include <Modloader/app/structs/RadialBlur.h>
#include <Modloader/app/structs/RadialBlur__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RadialBlur {
        inline app::RadialBlur__Class** type_info() {
            static app::RadialBlur__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RadialBlur__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RadialBlur__Class* get_class() {
            return il2cpp::get_class<app::RadialBlur__Class>(type_info(), "Colorful", "RadialBlur");
        }
        inline app::RadialBlur* create() {
            return il2cpp::create_object<app::RadialBlur>(get_class());
        }
    } // namespace RadialBlur
} // namespace app::classes::types
