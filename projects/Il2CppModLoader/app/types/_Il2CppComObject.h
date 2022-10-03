#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _Il2CppComObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::_Il2CppComObject__Class** type_info;
        inline app::_Il2CppComObject__Class* get_class() {
            return il2cpp::get_class<app::_Il2CppComObject__Class>(type_info, "System", "__Il2CppComObject");
        }
        inline app::_Il2CppComObject* create() {
            return il2cpp::create_object<app::_Il2CppComObject>(get_class());
        }
    } // namespace _Il2CppComObject
} // namespace app::classes::types
