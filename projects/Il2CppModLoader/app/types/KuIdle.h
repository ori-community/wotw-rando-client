#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuIdle {
        namespace {
            inline app::KuIdle__Class* type_info_ref = nullptr;
        }
        inline app::KuIdle__Class** type_info = &type_info_ref;
        inline app::KuIdle__Class* get_class() {
            return il2cpp::get_class<app::KuIdle__Class>(type_info, "", "KuIdle");
        }
        inline app::KuIdle* create() {
            return il2cpp::create_object<app::KuIdle>(get_class());
        }
    } // namespace KuIdle
} // namespace app::classes::types
