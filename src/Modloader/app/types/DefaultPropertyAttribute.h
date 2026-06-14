#pragma once
#include <Modloader/app/structs/DefaultPropertyAttribute.h>
#include <Modloader/app/structs/DefaultPropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultPropertyAttribute {
        inline app::DefaultPropertyAttribute__Class** type_info() {
            static app::DefaultPropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultPropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04782720));
            }
            return cache;
        }
        inline app::DefaultPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultPropertyAttribute__Class>(type_info(), "System.ComponentModel", "DefaultPropertyAttribute");
        }
        inline app::DefaultPropertyAttribute* create() {
            return il2cpp::create_object<app::DefaultPropertyAttribute>(get_class());
        }
    } // namespace DefaultPropertyAttribute
} // namespace app::classes::types
