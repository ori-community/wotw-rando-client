#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebRequest_WebProxyWrapperOpaque {
        namespace {
            inline app::WebRequest_WebProxyWrapperOpaque__Class* type_info_ref = nullptr;
        }
        inline app::WebRequest_WebProxyWrapperOpaque__Class** type_info = &type_info_ref;
        inline app::WebRequest_WebProxyWrapperOpaque__Class* get_class() {
            return il2cpp::get_nested_class<app::WebRequest_WebProxyWrapperOpaque__Class>(type_info, "System.Net", "WebRequest", "WebProxyWrapperOpaque");
        }
        inline app::WebRequest_WebProxyWrapperOpaque* create() {
            return il2cpp::create_object<app::WebRequest_WebProxyWrapperOpaque>(get_class());
        }
    } // namespace WebRequest_WebProxyWrapperOpaque
} // namespace app::classes::types
