#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProxyElement_BypassOnLocalValues__Enum {
        namespace {
            app::ProxyElement_BypassOnLocalValues__Enum__Class* type_info_ref = nullptr;
        }
        app::ProxyElement_BypassOnLocalValues__Enum__Class** type_info = &type_info_ref;
        inline app::ProxyElement_BypassOnLocalValues__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ProxyElement_BypassOnLocalValues__Enum__Class>(type_info, "System.Net.Configuration", "ProxyElement", "BypassOnLocalValues");
        }
        inline app::ProxyElement_BypassOnLocalValues__Enum* create() {
            return il2cpp::create_object<app::ProxyElement_BypassOnLocalValues__Enum>(get_class());
        }
    } // namespace ProxyElement_BypassOnLocalValues__Enum
} // namespace app::classes::types
