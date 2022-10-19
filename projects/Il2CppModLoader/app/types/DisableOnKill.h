#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisableOnKill {
        namespace {
            inline app::DisableOnKill__Class* type_info_ref = nullptr;
        }
        inline app::DisableOnKill__Class** type_info = &type_info_ref;
        inline app::DisableOnKill__Class* get_class() {
            return il2cpp::get_class<app::DisableOnKill__Class>(type_info, "", "DisableOnKill");
        }
        inline app::DisableOnKill* create() {
            return il2cpp::create_object<app::DisableOnKill>(get_class());
        }
    } // namespace DisableOnKill
} // namespace app::classes::types
