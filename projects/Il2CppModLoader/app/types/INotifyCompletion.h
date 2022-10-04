#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INotifyCompletion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INotifyCompletion__Class** type_info;
        inline app::INotifyCompletion__Class* get_class() {
            return il2cpp::get_class<app::INotifyCompletion__Class>(type_info, "System.Runtime.CompilerServices", "INotifyCompletion");
        }
        inline app::INotifyCompletion* create() {
            return il2cpp::create_object<app::INotifyCompletion>(get_class());
        }
    } // namespace INotifyCompletion
} // namespace app::classes::types
