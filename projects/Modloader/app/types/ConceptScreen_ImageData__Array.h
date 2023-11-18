#pragma once
#include <Modloader/app/structs/ConceptScreen_ImageData__Array.h>
#include <Modloader/app/structs/ConceptScreen_ImageData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConceptScreen_ImageData__Array {
        inline app::ConceptScreen_ImageData__Array__Class** type_info() {
            static app::ConceptScreen_ImageData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConceptScreen_ImageData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConceptScreen_ImageData__Array__Class* get_class() {
            return il2cpp::get_class<app::ConceptScreen_ImageData__Array__Class>(type_info(), "", "ConceptScreen+ImageData[]");
        }
        inline app::ConceptScreen_ImageData__Array* create() {
            return il2cpp::create_object<app::ConceptScreen_ImageData__Array>(get_class());
        }
    } // namespace ConceptScreen_ImageData__Array
} // namespace app::classes::types
