#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConceptScreen_ImageData {
        namespace {
            inline app::ConceptScreen_ImageData__Class* type_info_ref = nullptr;
        }
        inline app::ConceptScreen_ImageData__Class** type_info = &type_info_ref;
        inline app::ConceptScreen_ImageData__Class* get_class() {
            return il2cpp::get_nested_class<app::ConceptScreen_ImageData__Class>(type_info, "", "ConceptScreen", "ImageData");
        }
        inline app::ConceptScreen_ImageData* create() {
            return il2cpp::create_object<app::ConceptScreen_ImageData>(get_class());
        }
        inline app::ConceptScreen_ImageData__Array* create_array(int size) {
            return il2cpp::array_new<app::ConceptScreen_ImageData__Array>(get_class(), size);
        }
        inline app::ConceptScreen_ImageData__Array* create_array(const std::vector<app::ConceptScreen_ImageData*>& items) {
            return il2cpp::array_new<app::ConceptScreen_ImageData__Array>(get_class(), items);
        }
    } // namespace ConceptScreen_ImageData
} // namespace app::classes::types
