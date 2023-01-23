#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConceptScreen_ImageData__Array__Class.h>
#include <Modloader/app/structs/ConceptScreen_ImageData__Array.h>

namespace app::classes::types {
    namespace ConceptScreen_ImageData__Array {
        namespace {
            inline app::ConceptScreen_ImageData__Array__Class* type_info_ref = nullptr;
        }
        inline app::ConceptScreen_ImageData__Array__Class** type_info = &type_info_ref;
        inline app::ConceptScreen_ImageData__Array__Class* get_class() {
            return il2cpp::get_class<app::ConceptScreen_ImageData__Array__Class>(type_info, "", "ConceptScreen+ImageData[]");
        }
        inline app::ConceptScreen_ImageData__Array* create() {
            return il2cpp::create_object<app::ConceptScreen_ImageData__Array>(get_class());
        }
    } // namespace ConceptScreen_ImageData__Array
} // namespace app::classes::types
