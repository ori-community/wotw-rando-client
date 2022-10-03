#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinMaxSliderAttribute {
        namespace {
            app::MinMaxSliderAttribute__Class* type_info_ref = nullptr;
        }
        app::MinMaxSliderAttribute__Class** type_info = &type_info_ref;
        inline app::MinMaxSliderAttribute__Class* get_class() {
            return il2cpp::get_class<app::MinMaxSliderAttribute__Class>(type_info, "Moon.Attributes", "MinMaxSliderAttribute");
        }
        inline app::MinMaxSliderAttribute* create() {
            return il2cpp::create_object<app::MinMaxSliderAttribute>(get_class());
        }
    } // namespace MinMaxSliderAttribute
} // namespace app::classes::types
