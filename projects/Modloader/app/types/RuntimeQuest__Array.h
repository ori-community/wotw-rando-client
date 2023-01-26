#pragma once
#include <Modloader/app/structs/RuntimeQuest__Array.h>
#include <Modloader/app/structs/RuntimeQuest__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeQuest__Array {
        inline app::RuntimeQuest__Array__Class** type_info() {
            static app::RuntimeQuest__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeQuest__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeQuest__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeQuest__Array__Class>(type_info(), "", "RuntimeQuest[]");
        }
        inline app::RuntimeQuest__Array* create() {
            return il2cpp::create_object<app::RuntimeQuest__Array>(get_class());
        }
    } // namespace RuntimeQuest__Array
} // namespace app::classes::types
