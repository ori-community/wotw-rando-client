#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _ArrayPoolDefault {
        namespace {
            app::_ArrayPoolDefault__Class* type_info_ref = nullptr;
        }
        app::_ArrayPoolDefault__Class** type_info = &type_info_ref;
        inline app::_ArrayPoolDefault__Class* get_class() {
            return il2cpp::get_class<app::_ArrayPoolDefault__Class>(type_info, "", "_ArrayPoolDefault");
        }
        inline app::_ArrayPoolDefault* create() {
            return il2cpp::create_object<app::_ArrayPoolDefault>(get_class());
        }
    } // namespace _ArrayPoolDefault
} // namespace app::classes::types
