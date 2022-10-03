#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeInferenceRules__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeInferenceRules__Enum__Class** type_info;
        inline app::TypeInferenceRules__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeInferenceRules__Enum__Class>(type_info, "UnityEngineInternal", "TypeInferenceRules");
        }
        inline app::TypeInferenceRules__Enum* create() {
            return il2cpp::create_object<app::TypeInferenceRules__Enum>(get_class());
        }
    } // namespace TypeInferenceRules__Enum
} // namespace app::classes::types
