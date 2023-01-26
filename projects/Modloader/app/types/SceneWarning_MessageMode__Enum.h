#pragma once
#include <Modloader/app/structs/SceneWarning_MessageMode__Enum.h>
#include <Modloader/app/structs/SceneWarning_MessageMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneWarning_MessageMode__Enum {
        inline app::SceneWarning_MessageMode__Enum__Class** type_info() {
            static app::SceneWarning_MessageMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneWarning_MessageMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneWarning_MessageMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneWarning_MessageMode__Enum__Class>(type_info(), "", "SceneWarning", "MessageMode");
        }
        inline app::SceneWarning_MessageMode__Enum* create() {
            return il2cpp::create_object<app::SceneWarning_MessageMode__Enum>(get_class());
        }
    } // namespace SceneWarning_MessageMode__Enum
} // namespace app::classes::types
