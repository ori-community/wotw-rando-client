#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerModifier__Array {
        namespace {
            app::MultiplyLayerModifier__Array__Class* type_info_ref = nullptr;
        }
        app::MultiplyLayerModifier__Array__Class** type_info = &type_info_ref;
        inline app::MultiplyLayerModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerModifier__Array__Class>(type_info, "", "MultiplyLayerModifier[]");
        }
        inline app::MultiplyLayerModifier__Array* create() {
            return il2cpp::create_object<app::MultiplyLayerModifier__Array>(get_class());
        }
    } // namespace MultiplyLayerModifier__Array
} // namespace app::classes::types
