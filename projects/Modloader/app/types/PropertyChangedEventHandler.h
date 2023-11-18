#pragma once
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/PropertyChangedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyChangedEventHandler {
        inline app::PropertyChangedEventHandler__Class** type_info() {
            static app::PropertyChangedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyChangedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04761DC8));
            }
            return cache;
        }
        inline app::PropertyChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangedEventHandler__Class>(type_info(), "System.ComponentModel", "PropertyChangedEventHandler");
        }
        inline app::PropertyChangedEventHandler* create() {
            return il2cpp::create_object<app::PropertyChangedEventHandler>(get_class());
        }
    } // namespace PropertyChangedEventHandler
} // namespace app::classes::types
