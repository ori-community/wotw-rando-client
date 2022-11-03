#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeInferenceRules__Enum {
        inline app::TypeInferenceRules__Enum__Class** type_info = (app::TypeInferenceRules__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470B660));
        inline app::TypeInferenceRules__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeInferenceRules__Enum__Class>(type_info, "UnityEngineInternal", "TypeInferenceRules");
        }
        inline app::TypeInferenceRules__Enum* create() {
            return il2cpp::create_object<app::TypeInferenceRules__Enum>(get_class());
        }
    } // namespace TypeInferenceRules__Enum
} // namespace app::classes::types
