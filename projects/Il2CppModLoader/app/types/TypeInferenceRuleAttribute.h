#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeInferenceRuleAttribute {
        namespace {
            app::TypeInferenceRuleAttribute__Class* type_info_ref = nullptr;
        }
        app::TypeInferenceRuleAttribute__Class** type_info = &type_info_ref;
        inline app::TypeInferenceRuleAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeInferenceRuleAttribute__Class>(type_info, "UnityEngineInternal", "TypeInferenceRuleAttribute");
        }
        inline app::TypeInferenceRuleAttribute* create() {
            return il2cpp::create_object<app::TypeInferenceRuleAttribute>(get_class());
        }
    } // namespace TypeInferenceRuleAttribute
} // namespace app::classes::types
