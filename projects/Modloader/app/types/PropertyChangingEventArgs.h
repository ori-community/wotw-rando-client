#pragma once
#include <Modloader/app/structs/PropertyChangingEventArgs.h>
#include <Modloader/app/structs/PropertyChangingEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyChangingEventArgs {
        inline app::PropertyChangingEventArgs__Class** type_info() {
            static app::PropertyChangingEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyChangingEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04750F58));
            }
            return cache;
        }
        inline app::PropertyChangingEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PropertyChangingEventArgs__Class>(type_info(), "System.ComponentModel", "PropertyChangingEventArgs");
        }
        inline app::PropertyChangingEventArgs* create() {
            return il2cpp::create_object<app::PropertyChangingEventArgs>(get_class());
        }
    } // namespace PropertyChangingEventArgs
} // namespace app::classes::types
