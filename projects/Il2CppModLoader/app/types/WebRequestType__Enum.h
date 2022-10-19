#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebRequestType__Enum {
        namespace {
            inline app::WebRequestType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WebRequestType__Enum__Class** type_info = &type_info_ref;
        inline app::WebRequestType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebRequestType__Enum__Class>(type_info, "PlayFab", "WebRequestType");
        }
        inline app::WebRequestType__Enum* create() {
            return il2cpp::create_object<app::WebRequestType__Enum>(get_class());
        }
    } // namespace WebRequestType__Enum
} // namespace app::classes::types
