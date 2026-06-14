#pragma once
#include <Modloader/app/structs/MultiplyLayerModifier__Array.h>
#include <Modloader/app/structs/MultiplyLayerModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplyLayerModifier__Array {
        inline app::MultiplyLayerModifier__Array__Class** type_info() {
            static app::MultiplyLayerModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplyLayerModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplyLayerModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::MultiplyLayerModifier__Array__Class>(type_info(), "", "MultiplyLayerModifier[]");
        }
        inline app::MultiplyLayerModifier__Array* create() {
            return il2cpp::create_object<app::MultiplyLayerModifier__Array>(get_class());
        }
    } // namespace MultiplyLayerModifier__Array
} // namespace app::classes::types
