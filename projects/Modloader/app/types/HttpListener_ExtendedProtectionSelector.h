#pragma once
#include <Modloader/app/structs/HttpListener_ExtendedProtectionSelector.h>
#include <Modloader/app/structs/HttpListener_ExtendedProtectionSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListener_ExtendedProtectionSelector {
        inline app::HttpListener_ExtendedProtectionSelector__Class** type_info() {
            static app::HttpListener_ExtendedProtectionSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpListener_ExtendedProtectionSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpListener_ExtendedProtectionSelector__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListener_ExtendedProtectionSelector__Class>(type_info(), "System.Net", "HttpListener", "ExtendedProtectionSelector");
        }
        inline app::HttpListener_ExtendedProtectionSelector* create() {
            return il2cpp::create_object<app::HttpListener_ExtendedProtectionSelector>(get_class());
        }
    } // namespace HttpListener_ExtendedProtectionSelector
} // namespace app::classes::types
