#pragma once
#include <Modloader/app/structs/UseTypeForAOTGenerationAttribute.h>
#include <Modloader/app/structs/UseTypeForAOTGenerationAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UseTypeForAOTGenerationAttribute {
        inline app::UseTypeForAOTGenerationAttribute__Class** type_info() {
            static app::UseTypeForAOTGenerationAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UseTypeForAOTGenerationAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UseTypeForAOTGenerationAttribute__Class* get_class() {
            return il2cpp::get_class<app::UseTypeForAOTGenerationAttribute__Class>(type_info(), "Moon", "UseTypeForAOTGenerationAttribute");
        }
        inline app::UseTypeForAOTGenerationAttribute* create() {
            return il2cpp::create_object<app::UseTypeForAOTGenerationAttribute>(get_class());
        }
    } // namespace UseTypeForAOTGenerationAttribute
} // namespace app::classes::types
