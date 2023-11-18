#pragma once
#include <Modloader/app/structs/TranslationTurbulenceBiasDynamicController.h>
#include <Modloader/app/structs/TranslationTurbulenceBiasDynamicController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TranslationTurbulenceBiasDynamicController {
        inline app::TranslationTurbulenceBiasDynamicController__Class** type_info() {
            static app::TranslationTurbulenceBiasDynamicController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TranslationTurbulenceBiasDynamicController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TranslationTurbulenceBiasDynamicController__Class* get_class() {
            return il2cpp::get_class<app::TranslationTurbulenceBiasDynamicController__Class>(type_info(), "", "TranslationTurbulenceBiasDynamicController");
        }
        inline app::TranslationTurbulenceBiasDynamicController* create() {
            return il2cpp::create_object<app::TranslationTurbulenceBiasDynamicController>(get_class());
        }
    } // namespace TranslationTurbulenceBiasDynamicController
} // namespace app::classes::types
