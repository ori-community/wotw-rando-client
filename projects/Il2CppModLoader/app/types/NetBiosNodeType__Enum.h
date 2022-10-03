#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetBiosNodeType__Enum {
        namespace {
            app::NetBiosNodeType__Enum__Class* type_info_ref = nullptr;
        }
        app::NetBiosNodeType__Enum__Class** type_info = &type_info_ref;
        inline app::NetBiosNodeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NetBiosNodeType__Enum__Class>(type_info, "System.Net.NetworkInformation", "NetBiosNodeType");
        }
        inline app::NetBiosNodeType__Enum* create() {
            return il2cpp::create_object<app::NetBiosNodeType__Enum>(get_class());
        }
    } // namespace NetBiosNodeType__Enum
} // namespace app::classes::types
