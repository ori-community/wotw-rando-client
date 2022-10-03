#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _DTString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::_DTString__Class** type_info;
        inline app::_DTString__Class* get_class() {
            return il2cpp::get_class<app::_DTString__Class>(type_info, "System", "__DTString");
        }
        inline app::_DTString* create() {
            return il2cpp::create_object<app::_DTString>(get_class());
        }
        inline app::_DTString__Boxed* box(app::_DTString value) {
            return il2cpp::box_value<app::_DTString__Boxed>(get_class(), value);
        }
    } // namespace _DTString
} // namespace app::classes::types
