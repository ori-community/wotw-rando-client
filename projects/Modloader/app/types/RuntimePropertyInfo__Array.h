#pragma once
#include <Modloader/app/structs/RuntimePropertyInfo__Array.h>
#include <Modloader/app/structs/RuntimePropertyInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimePropertyInfo__Array {
        inline app::RuntimePropertyInfo__Array__Class** type_info() {
            static app::RuntimePropertyInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimePropertyInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0476EE20));
            }
            return cache;
        }
        inline app::RuntimePropertyInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimePropertyInfo__Array__Class>(type_info(), "System.Reflection", "RuntimePropertyInfo[]");
        }
        inline app::RuntimePropertyInfo__Array* create() {
            return il2cpp::create_object<app::RuntimePropertyInfo__Array>(get_class());
        }
    } // namespace RuntimePropertyInfo__Array
} // namespace app::classes::types
