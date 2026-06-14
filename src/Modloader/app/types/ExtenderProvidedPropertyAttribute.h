#pragma once
#include <Modloader/app/structs/ExtenderProvidedPropertyAttribute.h>
#include <Modloader/app/structs/ExtenderProvidedPropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtenderProvidedPropertyAttribute {
        inline app::ExtenderProvidedPropertyAttribute__Class** type_info() {
            static app::ExtenderProvidedPropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtenderProvidedPropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x047367F8));
            }
            return cache;
        }
        inline app::ExtenderProvidedPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExtenderProvidedPropertyAttribute__Class>(type_info(), "System.ComponentModel", "ExtenderProvidedPropertyAttribute");
        }
        inline app::ExtenderProvidedPropertyAttribute* create() {
            return il2cpp::create_object<app::ExtenderProvidedPropertyAttribute>(get_class());
        }
    } // namespace ExtenderProvidedPropertyAttribute
} // namespace app::classes::types
