#pragma once
#include <Modloader/app/structs/ExecuteInEditMode__Array.h>
#include <Modloader/app/structs/ExecuteInEditMode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteInEditMode__Array {
        inline app::ExecuteInEditMode__Array__Class** type_info() {
            static app::ExecuteInEditMode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecuteInEditMode__Array__Class**)(modloader::win::memory::resolve_rva(0x04797220));
            }
            return cache;
        }
        inline app::ExecuteInEditMode__Array__Class* get_class() {
            return il2cpp::get_class<app::ExecuteInEditMode__Array__Class>(type_info(), "UnityEngine", "ExecuteInEditMode[]");
        }
        inline app::ExecuteInEditMode__Array* create() {
            return il2cpp::create_object<app::ExecuteInEditMode__Array>(get_class());
        }
    } // namespace ExecuteInEditMode__Array
} // namespace app::classes::types
