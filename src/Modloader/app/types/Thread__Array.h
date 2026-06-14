#pragma once
#include <Modloader/app/structs/Thread__Array.h>
#include <Modloader/app/structs/Thread__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Thread__Array {
        inline app::Thread__Array__Class** type_info() {
            static app::Thread__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Thread__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Thread__Array__Class* get_class() {
            return il2cpp::get_class<app::Thread__Array__Class>(type_info(), "System.Threading", "Thread[]");
        }
        inline app::Thread__Array* create() {
            return il2cpp::create_object<app::Thread__Array>(get_class());
        }
    } // namespace Thread__Array
} // namespace app::classes::types
