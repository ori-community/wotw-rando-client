#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Browser_NewWindowAction__Enum {
        namespace {
            app::Browser_NewWindowAction__Enum__Class* type_info_ref = nullptr;
        }
        app::Browser_NewWindowAction__Enum__Class** type_info = &type_info_ref;
        inline app::Browser_NewWindowAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_NewWindowAction__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "NewWindowAction");
        }
        inline app::Browser_NewWindowAction__Enum* create() {
            return il2cpp::create_object<app::Browser_NewWindowAction__Enum>(get_class());
        }
    } // namespace Browser_NewWindowAction__Enum
} // namespace app::classes::types
