#pragma once
#include <Modloader/app/structs/RefreshEventHandler.h>
#include <Modloader/app/structs/RefreshEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefreshEventHandler {
        inline app::RefreshEventHandler__Class** type_info() {
            static app::RefreshEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RefreshEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0471EEC0));
            }
            return cache;
        }
        inline app::RefreshEventHandler__Class* get_class() {
            return il2cpp::get_class<app::RefreshEventHandler__Class>(type_info(), "System.ComponentModel", "RefreshEventHandler");
        }
        inline app::RefreshEventHandler* create() {
            return il2cpp::create_object<app::RefreshEventHandler>(get_class());
        }
    } // namespace RefreshEventHandler
} // namespace app::classes::types
