#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProxyElement_UseSystemDefaultValues__Enum {
        namespace {
            app::ProxyElement_UseSystemDefaultValues__Enum__Class* type_info_ref = nullptr;
        }
        app::ProxyElement_UseSystemDefaultValues__Enum__Class** type_info = &type_info_ref;
        inline app::ProxyElement_UseSystemDefaultValues__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ProxyElement_UseSystemDefaultValues__Enum__Class>(type_info, "System.Net.Configuration", "ProxyElement", "UseSystemDefaultValues");
        }
        inline app::ProxyElement_UseSystemDefaultValues__Enum* create() {
            return il2cpp::create_object<app::ProxyElement_UseSystemDefaultValues__Enum>(get_class());
        }
    } // namespace ProxyElement_UseSystemDefaultValues__Enum
} // namespace app::classes::types
