#pragma once
#include <Modloader/app/structs/WebRequestType__Enum.h>
#include <Modloader/app/structs/WebRequestType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebRequestType__Enum {
        inline app::WebRequestType__Enum__Class** type_info() {
            static app::WebRequestType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebRequestType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebRequestType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebRequestType__Enum__Class>(type_info(), "PlayFab", "WebRequestType");
        }
        inline app::WebRequestType__Enum* create() {
            return il2cpp::create_object<app::WebRequestType__Enum>(get_class());
        }
    } // namespace WebRequestType__Enum
} // namespace app::classes::types
