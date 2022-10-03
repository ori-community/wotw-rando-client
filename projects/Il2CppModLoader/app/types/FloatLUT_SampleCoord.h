#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatLUT_SampleCoord {
        namespace {
            app::FloatLUT_SampleCoord__Class* type_info_ref = nullptr;
        }
        app::FloatLUT_SampleCoord__Class** type_info = &type_info_ref;
        inline app::FloatLUT_SampleCoord__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatLUT_SampleCoord__Class>(type_info, "Swing", "FloatLUT", "SampleCoord");
        }
        inline app::FloatLUT_SampleCoord* create() {
            return il2cpp::create_object<app::FloatLUT_SampleCoord>(get_class());
        }
        inline app::FloatLUT_SampleCoord__Boxed* box(app::FloatLUT_SampleCoord value) {
            return il2cpp::box_value<app::FloatLUT_SampleCoord__Boxed>(get_class(), value);
        }
    } // namespace FloatLUT_SampleCoord
} // namespace app::classes::types
