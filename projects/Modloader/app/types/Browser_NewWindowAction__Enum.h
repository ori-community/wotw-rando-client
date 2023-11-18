#pragma once
#include <Modloader/app/structs/Browser_NewWindowAction__Enum.h>
#include <Modloader/app/structs/Browser_NewWindowAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Browser_NewWindowAction__Enum {
        inline app::Browser_NewWindowAction__Enum__Class** type_info() {
            static app::Browser_NewWindowAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Browser_NewWindowAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Browser_NewWindowAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_NewWindowAction__Enum__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Browser", "NewWindowAction");
        }
        inline app::Browser_NewWindowAction__Enum* create() {
            return il2cpp::create_object<app::Browser_NewWindowAction__Enum>(get_class());
        }
    } // namespace Browser_NewWindowAction__Enum
} // namespace app::classes::types
