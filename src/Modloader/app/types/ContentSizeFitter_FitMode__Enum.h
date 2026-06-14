#pragma once
#include <Modloader/app/structs/ContentSizeFitter_FitMode__Enum.h>
#include <Modloader/app/structs/ContentSizeFitter_FitMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContentSizeFitter_FitMode__Enum {
        inline app::ContentSizeFitter_FitMode__Enum__Class** type_info() {
            static app::ContentSizeFitter_FitMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContentSizeFitter_FitMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContentSizeFitter_FitMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ContentSizeFitter_FitMode__Enum__Class>(type_info(), "UnityEngine.UI", "ContentSizeFitter", "FitMode");
        }
        inline app::ContentSizeFitter_FitMode__Enum* create() {
            return il2cpp::create_object<app::ContentSizeFitter_FitMode__Enum>(get_class());
        }
    } // namespace ContentSizeFitter_FitMode__Enum
} // namespace app::classes::types
