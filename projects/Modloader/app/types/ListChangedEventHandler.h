#pragma once
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/ListChangedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListChangedEventHandler {
        inline app::ListChangedEventHandler__Class** type_info() {
            static app::ListChangedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04731368));
            }
            return cache;
        }
        inline app::ListChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::ListChangedEventHandler__Class>(type_info(), "System.ComponentModel", "ListChangedEventHandler");
        }
        inline app::ListChangedEventHandler* create() {
            return il2cpp::create_object<app::ListChangedEventHandler>(get_class());
        }
    } // namespace ListChangedEventHandler
} // namespace app::classes::types
