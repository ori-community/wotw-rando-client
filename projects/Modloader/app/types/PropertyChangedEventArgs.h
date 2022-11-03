#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyChangedEventArgs {
        inline app::PropertyChangedEventArgs__Class** type_info = (app::PropertyChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04787048));
        inline app::PropertyChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangedEventArgs__Class>(type_info, "System.ComponentModel", "PropertyChangedEventArgs");
        }
        inline app::PropertyChangedEventArgs* create() {
            return il2cpp::create_object<app::PropertyChangedEventArgs>(get_class());
        }
    } // namespace PropertyChangedEventArgs
} // namespace app::classes::types
