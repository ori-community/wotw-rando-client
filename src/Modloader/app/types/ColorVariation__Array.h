#pragma once
#include <Modloader/app/structs/ColorVariation__Array.h>
#include <Modloader/app/structs/ColorVariation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariation__Array {
        inline app::ColorVariation__Array__Class** type_info() {
            static app::ColorVariation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorVariation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorVariation__Array__Class* get_class() {
            return il2cpp::get_class<app::ColorVariation__Array__Class>(type_info(), "", "ColorVariation[]");
        }
        inline app::ColorVariation__Array* create() {
            return il2cpp::create_object<app::ColorVariation__Array>(get_class());
        }
    } // namespace ColorVariation__Array
} // namespace app::classes::types
