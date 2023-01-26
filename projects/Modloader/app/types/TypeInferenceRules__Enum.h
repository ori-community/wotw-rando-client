#pragma once
#include <Modloader/app/structs/TypeInferenceRules__Enum.h>
#include <Modloader/app/structs/TypeInferenceRules__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeInferenceRules__Enum {
        inline app::TypeInferenceRules__Enum__Class** type_info() {
            static app::TypeInferenceRules__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeInferenceRules__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470B660));
            }
            return cache;
        }
        inline app::TypeInferenceRules__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeInferenceRules__Enum__Class>(type_info(), "UnityEngineInternal", "TypeInferenceRules");
        }
        inline app::TypeInferenceRules__Enum* create() {
            return il2cpp::create_object<app::TypeInferenceRules__Enum>(get_class());
        }
    } // namespace TypeInferenceRules__Enum
} // namespace app::classes::types
