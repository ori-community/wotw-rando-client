#pragma once
#include <Modloader/app/structs/ProxyElement_UseSystemDefaultValues__Enum.h>
#include <Modloader/app/structs/ProxyElement_UseSystemDefaultValues__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProxyElement_UseSystemDefaultValues__Enum {
        inline app::ProxyElement_UseSystemDefaultValues__Enum__Class** type_info() {
            static app::ProxyElement_UseSystemDefaultValues__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProxyElement_UseSystemDefaultValues__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProxyElement_UseSystemDefaultValues__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ProxyElement_UseSystemDefaultValues__Enum__Class>(type_info(), "System.Net.Configuration", "ProxyElement", "UseSystemDefaultValues");
        }
        inline app::ProxyElement_UseSystemDefaultValues__Enum* create() {
            return il2cpp::create_object<app::ProxyElement_UseSystemDefaultValues__Enum>(get_class());
        }
    } // namespace ProxyElement_UseSystemDefaultValues__Enum
} // namespace app::classes::types
