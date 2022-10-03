#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneWarning_MessageMode__Enum {
        namespace {
            app::SceneWarning_MessageMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SceneWarning_MessageMode__Enum__Class** type_info = &type_info_ref;
        inline app::SceneWarning_MessageMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneWarning_MessageMode__Enum__Class>(type_info, "", "SceneWarning", "MessageMode");
        }
        inline app::SceneWarning_MessageMode__Enum* create() {
            return il2cpp::create_object<app::SceneWarning_MessageMode__Enum>(get_class());
        }
    } // namespace SceneWarning_MessageMode__Enum
} // namespace app::classes::types
