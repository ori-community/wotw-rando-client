#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISynchronizeInvoke {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISynchronizeInvoke__Class** type_info;
        inline app::ISynchronizeInvoke__Class* get_class() {
            return il2cpp::get_class<app::ISynchronizeInvoke__Class>(type_info, "System.ComponentModel", "ISynchronizeInvoke");
        }
        inline app::ISynchronizeInvoke* create() {
            return il2cpp::create_object<app::ISynchronizeInvoke>(get_class());
        }
    } // namespace ISynchronizeInvoke
} // namespace app::classes::types
