#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CannotUnloadAppDomainException {
        namespace {
            inline app::CannotUnloadAppDomainException__Class* type_info_ref = nullptr;
        }
        inline app::CannotUnloadAppDomainException__Class** type_info = &type_info_ref;
        inline app::CannotUnloadAppDomainException__Class* get_class() {
            return il2cpp::get_class<app::CannotUnloadAppDomainException__Class>(type_info, "System", "CannotUnloadAppDomainException");
        }
        inline app::CannotUnloadAppDomainException* create() {
            return il2cpp::create_object<app::CannotUnloadAppDomainException>(get_class());
        }
    } // namespace CannotUnloadAppDomainException
} // namespace app::classes::types
