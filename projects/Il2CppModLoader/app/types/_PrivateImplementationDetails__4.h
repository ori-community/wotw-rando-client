#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails__4 {
        namespace {
            app::_PrivateImplementationDetails__4__Class* type_info_ref = nullptr;
        }
        app::_PrivateImplementationDetails__4__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails__4__Class* get_class() {
            return il2cpp::get_class<app::_PrivateImplementationDetails__4__Class>(type_info, "", "<PrivateImplementationDetails>");
        }
        inline app::_PrivateImplementationDetails__4* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails__4>(get_class());
        }
    } // namespace _PrivateImplementationDetails__4
} // namespace app::classes::types
