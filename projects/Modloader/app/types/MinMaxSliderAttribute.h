#pragma once
#include <Modloader/app/structs/MinMaxSliderAttribute.h>
#include <Modloader/app/structs/MinMaxSliderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinMaxSliderAttribute {
        inline app::MinMaxSliderAttribute__Class** type_info() {
            static app::MinMaxSliderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinMaxSliderAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinMaxSliderAttribute__Class* get_class() {
            return il2cpp::get_class<app::MinMaxSliderAttribute__Class>(type_info(), "Moon.Attributes", "MinMaxSliderAttribute");
        }
        inline app::MinMaxSliderAttribute* create() {
            return il2cpp::create_object<app::MinMaxSliderAttribute>(get_class());
        }
    } // namespace MinMaxSliderAttribute
} // namespace app::classes::types
