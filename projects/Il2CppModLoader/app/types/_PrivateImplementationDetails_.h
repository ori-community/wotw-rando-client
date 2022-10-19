#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_ {
        namespace {
            inline app::_PrivateImplementationDetails___Class* type_info_ref = nullptr;
        }
        inline app::_PrivateImplementationDetails___Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails___Class* get_class() {
            return il2cpp::get_class<app::_PrivateImplementationDetails___Class>(type_info, "", "<PrivateImplementationDetails>");
        }
        inline app::_PrivateImplementationDetails_* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_>(get_class());
        }
    } // namespace _PrivateImplementationDetails_
} // namespace app::classes::types
