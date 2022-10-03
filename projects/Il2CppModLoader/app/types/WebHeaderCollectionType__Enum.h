#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebHeaderCollectionType__Enum {
        namespace {
            app::WebHeaderCollectionType__Enum__Class* type_info_ref = nullptr;
        }
        app::WebHeaderCollectionType__Enum__Class** type_info = &type_info_ref;
        inline app::WebHeaderCollectionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebHeaderCollectionType__Enum__Class>(type_info, "System.Net", "WebHeaderCollectionType");
        }
        inline app::WebHeaderCollectionType__Enum* create() {
            return il2cpp::create_object<app::WebHeaderCollectionType__Enum>(get_class());
        }
    } // namespace WebHeaderCollectionType__Enum
} // namespace app::classes::types
