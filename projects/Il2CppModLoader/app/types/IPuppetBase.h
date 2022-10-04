#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPuppetBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPuppetBase__Class** type_info;
        inline app::IPuppetBase__Class* get_class() {
            return il2cpp::get_class<app::IPuppetBase__Class>(type_info, "", "IPuppetBase");
        }
        inline app::IPuppetBase* create() {
            return il2cpp::create_object<app::IPuppetBase>(get_class());
        }
    } // namespace IPuppetBase
} // namespace app::classes::types
