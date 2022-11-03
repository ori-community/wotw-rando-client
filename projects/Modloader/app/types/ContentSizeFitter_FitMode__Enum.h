#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContentSizeFitter_FitMode__Enum {
        namespace {
            inline app::ContentSizeFitter_FitMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ContentSizeFitter_FitMode__Enum__Class** type_info = &type_info_ref;
        inline app::ContentSizeFitter_FitMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ContentSizeFitter_FitMode__Enum__Class>(type_info, "UnityEngine.UI", "ContentSizeFitter", "FitMode");
        }
        inline app::ContentSizeFitter_FitMode__Enum* create() {
            return il2cpp::create_object<app::ContentSizeFitter_FitMode__Enum>(get_class());
        }
    } // namespace ContentSizeFitter_FitMode__Enum
} // namespace app::classes::types
