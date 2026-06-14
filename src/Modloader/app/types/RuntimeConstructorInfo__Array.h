#pragma once
#include <Modloader/app/structs/RuntimeConstructorInfo__Array.h>
#include <Modloader/app/structs/RuntimeConstructorInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeConstructorInfo__Array {
        inline app::RuntimeConstructorInfo__Array__Class** type_info() {
            static app::RuntimeConstructorInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeConstructorInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04786640));
            }
            return cache;
        }
        inline app::RuntimeConstructorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeConstructorInfo__Array__Class>(type_info(), "System.Reflection", "RuntimeConstructorInfo[]");
        }
        inline app::RuntimeConstructorInfo__Array* create() {
            return il2cpp::create_object<app::RuntimeConstructorInfo__Array>(get_class());
        }
    } // namespace RuntimeConstructorInfo__Array
} // namespace app::classes::types
