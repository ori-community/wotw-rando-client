#pragma once
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_AlphaState.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Boxed.h>
#include <Modloader/app/structs/ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExperimentalTransparencyAnimatorSystemStrategy_AlphaState {
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class** type_info() {
            static app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class* get_class() {
            return il2cpp::get_nested_class<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Class>(type_info(), "Moon.Timeline", "ExperimentalTransparencyAnimatorSystemStrategy", "AlphaState");
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState* create() {
            return il2cpp::create_object<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState>(get_class());
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Boxed* box(app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState value) {
            return il2cpp::box_value<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Boxed>(get_class(), value);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array* create_array(int size) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array>(get_class(), size);
        }
        inline app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array* create_array(const std::vector<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState>& items) {
            return il2cpp::array_new<app::ExperimentalTransparencyAnimatorSystemStrategy_AlphaState__Array>(get_class(), items);
        }
    } // namespace ExperimentalTransparencyAnimatorSystemStrategy_AlphaState
} // namespace app::classes::types
