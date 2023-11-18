#pragma once
#include <Modloader/app/structs/INotifyPropertyChanged.h>
#include <Modloader/app/structs/INotifyPropertyChanged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace INotifyPropertyChanged {
        inline app::INotifyPropertyChanged__Class** type_info() {
            static app::INotifyPropertyChanged__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::INotifyPropertyChanged__Class**)(modloader::win::memory::resolve_rva(0x04746A80));
            }
            return cache;
        }
        inline app::INotifyPropertyChanged__Class* get_class() {
            return il2cpp::get_class<app::INotifyPropertyChanged__Class>(type_info(), "System.ComponentModel", "INotifyPropertyChanged");
        }
    } // namespace INotifyPropertyChanged
} // namespace app::classes::types
