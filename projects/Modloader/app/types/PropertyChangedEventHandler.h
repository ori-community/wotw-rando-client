#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyChangedEventHandler {
        inline app::PropertyChangedEventHandler__Class** type_info = (app::PropertyChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04761DC8));
        inline app::PropertyChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangedEventHandler__Class>(type_info, "System.ComponentModel", "PropertyChangedEventHandler");
        }
        inline app::PropertyChangedEventHandler* create() {
            return il2cpp::create_object<app::PropertyChangedEventHandler>(get_class());
        }
    } // namespace PropertyChangedEventHandler
} // namespace app::classes::types
