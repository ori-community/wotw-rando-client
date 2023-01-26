#pragma once
#include <Modloader/app/structs/MonoProperty_GetterAdapter.h>
#include <Modloader/app/structs/MonoProperty_GetterAdapter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoProperty_GetterAdapter {
        inline app::MonoProperty_GetterAdapter__Class** type_info() {
            static app::MonoProperty_GetterAdapter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoProperty_GetterAdapter__Class**)(modloader::win::memory::resolve_rva(0x0476F948));
            }
            return cache;
        }
        inline app::MonoProperty_GetterAdapter__Class* get_class() {
            return il2cpp::get_nested_class<app::MonoProperty_GetterAdapter__Class>(type_info(), "System.Reflection", "MonoProperty", "GetterAdapter");
        }
        inline app::MonoProperty_GetterAdapter* create() {
            return il2cpp::create_object<app::MonoProperty_GetterAdapter>(get_class());
        }
    } // namespace MonoProperty_GetterAdapter
} // namespace app::classes::types
