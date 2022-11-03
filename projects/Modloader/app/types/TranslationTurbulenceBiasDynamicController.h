#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TranslationTurbulenceBiasDynamicController {
        namespace {
            inline app::TranslationTurbulenceBiasDynamicController__Class* type_info_ref = nullptr;
        }
        inline app::TranslationTurbulenceBiasDynamicController__Class** type_info = &type_info_ref;
        inline app::TranslationTurbulenceBiasDynamicController__Class* get_class() {
            return il2cpp::get_class<app::TranslationTurbulenceBiasDynamicController__Class>(type_info, "", "TranslationTurbulenceBiasDynamicController");
        }
        inline app::TranslationTurbulenceBiasDynamicController* create() {
            return il2cpp::create_object<app::TranslationTurbulenceBiasDynamicController>(get_class());
        }
    } // namespace TranslationTurbulenceBiasDynamicController
} // namespace app::classes::types
