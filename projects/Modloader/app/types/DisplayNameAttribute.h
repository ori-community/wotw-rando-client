#pragma once
#include <Modloader/app/structs/DisplayNameAttribute.h>
#include <Modloader/app/structs/DisplayNameAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisplayNameAttribute {
        inline app::DisplayNameAttribute__Class** type_info() {
            static app::DisplayNameAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DisplayNameAttribute__Class**)(modloader::win::memory::resolve_rva(0x0478EF88));
            }
            return cache;
        }
        inline app::DisplayNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::DisplayNameAttribute__Class>(type_info(), "System.ComponentModel", "DisplayNameAttribute");
        }
        inline app::DisplayNameAttribute* create() {
            return il2cpp::create_object<app::DisplayNameAttribute>(get_class());
        }
    } // namespace DisplayNameAttribute
} // namespace app::classes::types
