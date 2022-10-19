#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FtpCachePolicyElement {
        namespace {
            inline app::FtpCachePolicyElement__Class* type_info_ref = nullptr;
        }
        inline app::FtpCachePolicyElement__Class** type_info = &type_info_ref;
        inline app::FtpCachePolicyElement__Class* get_class() {
            return il2cpp::get_class<app::FtpCachePolicyElement__Class>(type_info, "System.Net.Configuration", "FtpCachePolicyElement");
        }
        inline app::FtpCachePolicyElement* create() {
            return il2cpp::create_object<app::FtpCachePolicyElement>(get_class());
        }
    } // namespace FtpCachePolicyElement
} // namespace app::classes::types
