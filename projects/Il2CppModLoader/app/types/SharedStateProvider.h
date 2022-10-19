#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SharedStateProvider {
        namespace {
            inline app::SharedStateProvider__Class* type_info_ref = nullptr;
        }
        inline app::SharedStateProvider__Class** type_info = &type_info_ref;
        inline app::SharedStateProvider__Class* get_class() {
            return il2cpp::get_class<app::SharedStateProvider__Class>(type_info, "", "SharedStateProvider");
        }
        inline app::SharedStateProvider* create() {
            return il2cpp::create_object<app::SharedStateProvider>(get_class());
        }
    } // namespace SharedStateProvider
} // namespace app::classes::types
