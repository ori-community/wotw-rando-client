#pragma once
#include <Modloader/app/structs/RefreshPropertiesAttribute.h>
#include <Modloader/app/structs/RefreshPropertiesAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefreshPropertiesAttribute {
        inline app::RefreshPropertiesAttribute__Class** type_info() {
            static app::RefreshPropertiesAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RefreshPropertiesAttribute__Class**)(modloader::win::memory::resolve_rva(0x04729610));
            }
            return cache;
        }
        inline app::RefreshPropertiesAttribute__Class* get_class() {
            return il2cpp::get_class<app::RefreshPropertiesAttribute__Class>(type_info(), "System.ComponentModel", "RefreshPropertiesAttribute");
        }
        inline app::RefreshPropertiesAttribute* create() {
            return il2cpp::create_object<app::RefreshPropertiesAttribute>(get_class());
        }
    } // namespace RefreshPropertiesAttribute
} // namespace app::classes::types
