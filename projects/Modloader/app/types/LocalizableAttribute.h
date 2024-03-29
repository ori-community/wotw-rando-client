#pragma once
#include <Modloader/app/structs/LocalizableAttribute.h>
#include <Modloader/app/structs/LocalizableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalizableAttribute {
        inline app::LocalizableAttribute__Class** type_info() {
            static app::LocalizableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalizableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04769480));
            }
            return cache;
        }
        inline app::LocalizableAttribute__Class* get_class() {
            return il2cpp::get_class<app::LocalizableAttribute__Class>(type_info(), "System.ComponentModel", "LocalizableAttribute");
        }
        inline app::LocalizableAttribute* create() {
            return il2cpp::create_object<app::LocalizableAttribute>(get_class());
        }
    } // namespace LocalizableAttribute
} // namespace app::classes::types
