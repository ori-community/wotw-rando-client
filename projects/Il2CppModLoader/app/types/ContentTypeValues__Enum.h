#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContentTypeValues__Enum {
        namespace {
            app::ContentTypeValues__Enum__Class* type_info_ref = nullptr;
        }
        app::ContentTypeValues__Enum__Class** type_info = &type_info_ref;
        inline app::ContentTypeValues__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContentTypeValues__Enum__Class>(type_info, "System.Net", "ContentTypeValues");
        }
        inline app::ContentTypeValues__Enum* create() {
            return il2cpp::create_object<app::ContentTypeValues__Enum>(get_class());
        }
    } // namespace ContentTypeValues__Enum
} // namespace app::classes::types
