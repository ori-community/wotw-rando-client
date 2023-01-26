#pragma once
#include <Modloader/app/structs/TypeInferenceRuleAttribute.h>
#include <Modloader/app/structs/TypeInferenceRuleAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeInferenceRuleAttribute {
        inline app::TypeInferenceRuleAttribute__Class** type_info() {
            static app::TypeInferenceRuleAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeInferenceRuleAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeInferenceRuleAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeInferenceRuleAttribute__Class>(type_info(), "UnityEngineInternal", "TypeInferenceRuleAttribute");
        }
        inline app::TypeInferenceRuleAttribute* create() {
            return il2cpp::create_object<app::TypeInferenceRuleAttribute>(get_class());
        }
    } // namespace TypeInferenceRuleAttribute
} // namespace app::classes::types
