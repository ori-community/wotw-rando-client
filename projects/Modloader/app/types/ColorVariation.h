#pragma once
#include <Modloader/app/structs/ColorVariation.h>
#include <Modloader/app/structs/ColorVariation__Array.h>
#include <Modloader/app/structs/ColorVariation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariation {
        inline app::ColorVariation__Class** type_info() {
            static app::ColorVariation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorVariation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorVariation__Class* get_class() {
            return il2cpp::get_class<app::ColorVariation__Class>(type_info(), "", "ColorVariation");
        }
        inline app::ColorVariation* create() {
            return il2cpp::create_object<app::ColorVariation>(get_class());
        }
        inline app::ColorVariation__Array* create_array(int size) {
            return il2cpp::array_new<app::ColorVariation__Array>(get_class(), size);
        }
        inline app::ColorVariation__Array* create_array(const std::vector<app::ColorVariation*>& items) {
            return il2cpp::array_new<app::ColorVariation__Array>(get_class(), items);
        }
    } // namespace ColorVariation
} // namespace app::classes::types
