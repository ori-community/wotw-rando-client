#pragma once
#include <Modloader/app/structs/PropertyName.h>
#include <Modloader/app/structs/PropertyName__Boxed.h>
#include <Modloader/app/structs/PropertyName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyName {
        inline app::PropertyName__Class** type_info() {
            static app::PropertyName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PropertyName__Class**)(modloader::win::memory::resolve_rva(0x04771BB8));
            }
            return cache;
        }
        inline app::PropertyName__Class* get_class() {
            return il2cpp::get_class<app::PropertyName__Class>(type_info(), "UnityEngine", "PropertyName");
        }
        inline app::PropertyName* create() {
            return il2cpp::create_object<app::PropertyName>(get_class());
        }
        inline app::PropertyName__Boxed* box(app::PropertyName value) {
            return il2cpp::box_value<app::PropertyName__Boxed>(get_class(), value);
        }
    } // namespace PropertyName
} // namespace app::classes::types
