#pragma once
#include <Modloader/app/structs/ApplicationState__Enum.h>
#include <Modloader/app/structs/ApplicationState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplicationState__Enum {
        inline app::ApplicationState__Enum__Class** type_info() {
            static app::ApplicationState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplicationState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplicationState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ApplicationState__Enum__Class>(type_info(), "", "ApplicationState");
        }
        inline app::ApplicationState__Enum* create() {
            return il2cpp::create_object<app::ApplicationState__Enum>(get_class());
        }
    } // namespace ApplicationState__Enum
} // namespace app::classes::types
