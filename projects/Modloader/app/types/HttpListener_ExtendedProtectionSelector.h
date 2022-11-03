#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpListener_ExtendedProtectionSelector {
        namespace {
            inline app::HttpListener_ExtendedProtectionSelector__Class* type_info_ref = nullptr;
        }
        inline app::HttpListener_ExtendedProtectionSelector__Class** type_info = &type_info_ref;
        inline app::HttpListener_ExtendedProtectionSelector__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListener_ExtendedProtectionSelector__Class>(type_info, "System.Net", "HttpListener", "ExtendedProtectionSelector");
        }
        inline app::HttpListener_ExtendedProtectionSelector* create() {
            return il2cpp::create_object<app::HttpListener_ExtendedProtectionSelector>(get_class());
        }
    } // namespace HttpListener_ExtendedProtectionSelector
} // namespace app::classes::types
