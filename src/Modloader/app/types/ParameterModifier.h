#pragma once
#include <Modloader/app/structs/ParameterModifier.h>
#include <Modloader/app/structs/ParameterModifier__Array.h>
#include <Modloader/app/structs/ParameterModifier__Boxed.h>
#include <Modloader/app/structs/ParameterModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterModifier {
        inline app::ParameterModifier__Class** type_info() {
            static app::ParameterModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParameterModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParameterModifier__Class* get_class() {
            return il2cpp::get_class<app::ParameterModifier__Class>(type_info(), "System.Reflection", "ParameterModifier");
        }
        inline app::ParameterModifier* create() {
            return il2cpp::create_object<app::ParameterModifier>(get_class());
        }
        inline app::ParameterModifier__Boxed* box(app::ParameterModifier value) {
            return il2cpp::box_value<app::ParameterModifier__Boxed>(get_class(), value);
        }
        inline app::ParameterModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::ParameterModifier__Array>(get_class(), size);
        }
        inline app::ParameterModifier__Array* create_array(const std::vector<app::ParameterModifier>& items) {
            return il2cpp::array_new<app::ParameterModifier__Array>(get_class(), items);
        }
    } // namespace ParameterModifier
} // namespace app::classes::types
