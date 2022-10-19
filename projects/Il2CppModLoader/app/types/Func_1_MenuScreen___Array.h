#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Func_1_MenuScreen___Array {
        namespace {
            inline app::Func_1_MenuScreen___Array__Class* type_info_ref = nullptr;
        }
        inline app::Func_1_MenuScreen___Array__Class** type_info = &type_info_ref;
        inline app::Func_1_MenuScreen___Array__Class* get_class() {
            return il2cpp::get_class<app::Func_1_MenuScreen___Array__Class>(type_info, "System", "Func`1[MenuScreen][]");
        }
        inline app::Func_1_MenuScreen___Array* create() {
            return il2cpp::create_object<app::Func_1_MenuScreen___Array>(get_class());
        }
    } // namespace Func_1_MenuScreen___Array
} // namespace app::classes::types
