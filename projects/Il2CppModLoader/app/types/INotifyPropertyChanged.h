#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INotifyPropertyChanged {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INotifyPropertyChanged__Class** type_info;
        inline app::INotifyPropertyChanged__Class* get_class() {
            return il2cpp::get_class<app::INotifyPropertyChanged__Class>(type_info, "System.ComponentModel", "INotifyPropertyChanged");
        }
    } // namespace INotifyPropertyChanged
} // namespace app::classes::types
