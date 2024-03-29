#pragma once
#include <Modloader/app/structs/RuntimeType__Array.h>
#include <Modloader/app/structs/RuntimeType__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeType__Array {
        inline app::RuntimeType__Array__Class** type_info() {
            static app::RuntimeType__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeType__Array__Class**)(modloader::win::memory::resolve_rva(0x0472C900));
            }
            return cache;
        }
        inline app::RuntimeType__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeType__Array__Class>(type_info(), "System", "RuntimeType[]");
        }
        inline app::RuntimeType__Array* create() {
            return il2cpp::create_object<app::RuntimeType__Array>(get_class());
        }
    } // namespace RuntimeType__Array
} // namespace app::classes::types
