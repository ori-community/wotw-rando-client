#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TranslationTurbulenceBiasDynamicController {
        namespace {
            app::TranslationTurbulenceBiasDynamicController__Class* type_info_ref = nullptr;
        }
        app::TranslationTurbulenceBiasDynamicController__Class** type_info = &type_info_ref;
        inline app::TranslationTurbulenceBiasDynamicController__Class* get_class() {
            return il2cpp::get_class<app::TranslationTurbulenceBiasDynamicController__Class>(type_info, "", "TranslationTurbulenceBiasDynamicController");
        }
        inline app::TranslationTurbulenceBiasDynamicController* create() {
            return il2cpp::create_object<app::TranslationTurbulenceBiasDynamicController>(get_class());
        }
    } // namespace TranslationTurbulenceBiasDynamicController
} // namespace app::classes::types
