#pragma once
#include <Modloader/app/structs/PropertyChangingEventHandler.h>
#include <Modloader/app/structs/PropertyChangingEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyChangingEventHandler {
        inline app::PropertyChangingEventHandler__Class** type_info() {
            static app::PropertyChangingEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyChangingEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0476BF38));
            }
            return cache;
        }
        inline app::PropertyChangingEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangingEventHandler__Class>(type_info(), "System.ComponentModel", "PropertyChangingEventHandler");
        }
        inline app::PropertyChangingEventHandler* create() {
            return il2cpp::create_object<app::PropertyChangingEventHandler>(get_class());
        }
    } // namespace PropertyChangingEventHandler
} // namespace app::classes::types
