#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DomainNameHelper {
        namespace {
            inline app::DomainNameHelper__Class* type_info_ref = nullptr;
        }
        inline app::DomainNameHelper__Class** type_info = &type_info_ref;
        inline app::DomainNameHelper__Class* get_class() {
            return il2cpp::get_class<app::DomainNameHelper__Class>(type_info, "System", "DomainNameHelper");
        }
        inline app::DomainNameHelper* create() {
            return il2cpp::create_object<app::DomainNameHelper>(get_class());
        }
    } // namespace DomainNameHelper
} // namespace app::classes::types
