#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConceptScreen_ImageData {
        namespace {
            app::ConceptScreen_ImageData__Class* type_info_ref = nullptr;
        }
        app::ConceptScreen_ImageData__Class** type_info = &type_info_ref;
        inline app::ConceptScreen_ImageData__Class* get_class() {
            return il2cpp::get_nested_class<app::ConceptScreen_ImageData__Class>(type_info, "", "ConceptScreen", "ImageData");
        }
        inline app::ConceptScreen_ImageData* create() {
            return il2cpp::create_object<app::ConceptScreen_ImageData>(get_class());
        }
        inline app::ConceptScreen_ImageData__Array* create_array(int size) {
            return il2cpp::array_new<app::ConceptScreen_ImageData__Array>(get_class(), size);
        }
    } // namespace ConceptScreen_ImageData
} // namespace app::classes::types
