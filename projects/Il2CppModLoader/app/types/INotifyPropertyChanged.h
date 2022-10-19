#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INotifyPropertyChanged {
        inline app::INotifyPropertyChanged__Class** type_info = (app::INotifyPropertyChanged__Class**)(modloader::win::memory::resolve_rva(0x04746A80));
        inline app::INotifyPropertyChanged__Class* get_class() {
            return il2cpp::get_class<app::INotifyPropertyChanged__Class>(type_info, "System.ComponentModel", "INotifyPropertyChanged");
        }
    } // namespace INotifyPropertyChanged
} // namespace app::classes::types
