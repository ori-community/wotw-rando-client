#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisableEmitterOnKill {
        namespace {
            inline app::DisableEmitterOnKill__Class* type_info_ref = nullptr;
        }
        inline app::DisableEmitterOnKill__Class** type_info = &type_info_ref;
        inline app::DisableEmitterOnKill__Class* get_class() {
            return il2cpp::get_class<app::DisableEmitterOnKill__Class>(type_info, "", "DisableEmitterOnKill");
        }
        inline app::DisableEmitterOnKill* create() {
            return il2cpp::create_object<app::DisableEmitterOnKill>(get_class());
        }
    } // namespace DisableEmitterOnKill
} // namespace app::classes::types
