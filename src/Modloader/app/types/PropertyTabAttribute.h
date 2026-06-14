#pragma once
#include <Modloader/app/structs/PropertyTabAttribute.h>
#include <Modloader/app/structs/PropertyTabAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyTabAttribute {
        inline app::PropertyTabAttribute__Class** type_info() {
            static app::PropertyTabAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyTabAttribute__Class**)(modloader::win::memory::resolve_rva(0x04736AB8));
            }
            return cache;
        }
        inline app::PropertyTabAttribute__Class* get_class() {
            return il2cpp::get_class<app::PropertyTabAttribute__Class>(type_info(), "System.ComponentModel", "PropertyTabAttribute");
        }
        inline app::PropertyTabAttribute* create() {
            return il2cpp::create_object<app::PropertyTabAttribute>(get_class());
        }
    } // namespace PropertyTabAttribute
} // namespace app::classes::types
