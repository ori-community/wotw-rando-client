#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListChangedEventHandler {
        inline app::ListChangedEventHandler__Class** type_info = (app::ListChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04731368));
        inline app::ListChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ListChangedEventHandler__Class>(type_info, "System.ComponentModel", "ListChangedEventHandler");
        }
        inline app::ListChangedEventHandler* create() {
            return il2cpp::create_object<app::ListChangedEventHandler>(get_class());
        }
    } // namespace ListChangedEventHandler
} // namespace app::classes::types
