#pragma once
#include <Modloader/app/structs/MonoProperty.h>
#include <Modloader/app/structs/MonoProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoProperty {
        inline app::MonoProperty__Class** type_info() {
            static app::MonoProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoProperty__Class**)(modloader::win::memory::resolve_rva(0x04783CF8));
            }
            return cache;
        }
        inline app::MonoProperty__Class* get_class() {
            return il2cpp::get_class<app::MonoProperty__Class>(type_info(), "System.Reflection", "MonoProperty");
        }
        inline app::MonoProperty* create() {
            return il2cpp::create_object<app::MonoProperty>(get_class());
        }
    } // namespace MonoProperty
} // namespace app::classes::types
