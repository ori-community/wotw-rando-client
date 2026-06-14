#pragma once
#include <Modloader/app/structs/InheritanceAttribute.h>
#include <Modloader/app/structs/InheritanceAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InheritanceAttribute {
        inline app::InheritanceAttribute__Class** type_info() {
            static app::InheritanceAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InheritanceAttribute__Class**)(modloader::win::memory::resolve_rva(0x04737CA8));
            }
            return cache;
        }
        inline app::InheritanceAttribute__Class* get_class() {
            return il2cpp::get_class<app::InheritanceAttribute__Class>(type_info(), "System.ComponentModel", "InheritanceAttribute");
        }
        inline app::InheritanceAttribute* create() {
            return il2cpp::create_object<app::InheritanceAttribute>(get_class());
        }
    } // namespace InheritanceAttribute
} // namespace app::classes::types
