#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WeightedMode__Enum {
        namespace {
            inline app::WeightedMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WeightedMode__Enum__Class** type_info = &type_info_ref;
        inline app::WeightedMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WeightedMode__Enum__Class>(type_info, "UnityEngine", "WeightedMode");
        }
        inline app::WeightedMode__Enum* create() {
            return il2cpp::create_object<app::WeightedMode__Enum>(get_class());
        }
    } // namespace WeightedMode__Enum
} // namespace app::classes::types
