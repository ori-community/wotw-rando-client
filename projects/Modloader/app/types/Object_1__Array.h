#pragma once
#include <Modloader/app/structs/Object_1__Array.h>
#include <Modloader/app/structs/Object_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Object_1__Array {
        inline app::Object_1__Array__Class** type_info() {
            static app::Object_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Object_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04773FF8));
            }
            return cache;
        }
        inline app::Object_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Object_1__Array__Class>(type_info(), "UnityEngine", "Object[]");
        }
        inline app::Object_1__Array* create() {
            return il2cpp::create_object<app::Object_1__Array>(get_class());
        }
    } // namespace Object_1__Array
} // namespace app::classes::types
