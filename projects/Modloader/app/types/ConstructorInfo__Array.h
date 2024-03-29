#pragma once
#include <Modloader/app/structs/ConstructorInfo__Array.h>
#include <Modloader/app/structs/ConstructorInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstructorInfo__Array {
        inline app::ConstructorInfo__Array__Class** type_info() {
            static app::ConstructorInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstructorInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04763350));
            }
            return cache;
        }
        inline app::ConstructorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::ConstructorInfo__Array__Class>(type_info(), "System.Reflection", "ConstructorInfo[]");
        }
        inline app::ConstructorInfo__Array* create() {
            return il2cpp::create_object<app::ConstructorInfo__Array>(get_class());
        }
    } // namespace ConstructorInfo__Array
} // namespace app::classes::types
