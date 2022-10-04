#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICriticalNotifyCompletion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICriticalNotifyCompletion__Class** type_info;
        inline app::ICriticalNotifyCompletion__Class* get_class() {
            return il2cpp::get_class<app::ICriticalNotifyCompletion__Class>(type_info, "System.Runtime.CompilerServices", "ICriticalNotifyCompletion");
        }
        inline app::ICriticalNotifyCompletion* create() {
            return il2cpp::create_object<app::ICriticalNotifyCompletion>(get_class());
        }
    } // namespace ICriticalNotifyCompletion
} // namespace app::classes::types
