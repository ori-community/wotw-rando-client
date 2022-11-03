#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorLayerBlendingMode__Enum {
        namespace {
            inline app::MoonAnimatorLayerBlendingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimatorLayerBlendingMode__Enum__Class** type_info = &type_info_ref;
        inline app::MoonAnimatorLayerBlendingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorLayerBlendingMode__Enum__Class>(type_info, "Moon", "MoonAnimatorLayerBlendingMode");
        }
        inline app::MoonAnimatorLayerBlendingMode__Enum* create() {
            return il2cpp::create_object<app::MoonAnimatorLayerBlendingMode__Enum>(get_class());
        }
    } // namespace MoonAnimatorLayerBlendingMode__Enum
} // namespace app::classes::types
