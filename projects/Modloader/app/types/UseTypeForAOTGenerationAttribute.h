#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UseTypeForAOTGenerationAttribute {
        namespace {
            inline app::UseTypeForAOTGenerationAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UseTypeForAOTGenerationAttribute__Class** type_info = &type_info_ref;
        inline app::UseTypeForAOTGenerationAttribute__Class* get_class() {
            return il2cpp::get_class<app::UseTypeForAOTGenerationAttribute__Class>(type_info, "Moon", "UseTypeForAOTGenerationAttribute");
        }
        inline app::UseTypeForAOTGenerationAttribute* create() {
            return il2cpp::create_object<app::UseTypeForAOTGenerationAttribute>(get_class());
        }
    } // namespace UseTypeForAOTGenerationAttribute
} // namespace app::classes::types
