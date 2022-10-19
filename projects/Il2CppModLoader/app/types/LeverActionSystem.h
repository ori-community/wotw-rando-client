#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeverActionSystem {
        namespace {
            inline app::LeverActionSystem__Class* type_info_ref = nullptr;
        }
        inline app::LeverActionSystem__Class** type_info = &type_info_ref;
        inline app::LeverActionSystem__Class* get_class() {
            return il2cpp::get_class<app::LeverActionSystem__Class>(type_info, "", "LeverActionSystem");
        }
        inline app::LeverActionSystem* create() {
            return il2cpp::create_object<app::LeverActionSystem>(get_class());
        }
    } // namespace LeverActionSystem
} // namespace app::classes::types
