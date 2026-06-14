#pragma once
#include <Modloader/app/structs/ProvidePropertyAttribute.h>
#include <Modloader/app/structs/ProvidePropertyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProvidePropertyAttribute {
        inline app::ProvidePropertyAttribute__Class** type_info() {
            static app::ProvidePropertyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProvidePropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476C9C8));
            }
            return cache;
        }
        inline app::ProvidePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ProvidePropertyAttribute__Class>(type_info(), "System.ComponentModel", "ProvidePropertyAttribute");
        }
        inline app::ProvidePropertyAttribute* create() {
            return il2cpp::create_object<app::ProvidePropertyAttribute>(get_class());
        }
    } // namespace ProvidePropertyAttribute
} // namespace app::classes::types
