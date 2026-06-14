#pragma once
#include <Modloader/app/structs/Timer__Array.h>
#include <Modloader/app/structs/Timer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Timer__Array {
        inline app::Timer__Array__Class** type_info() {
            static app::Timer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Timer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Timer__Array__Class* get_class() {
            return il2cpp::get_class<app::Timer__Array__Class>(type_info(), "System.Threading", "Timer[]");
        }
        inline app::Timer__Array* create() {
            return il2cpp::create_object<app::Timer__Array>(get_class());
        }
    } // namespace Timer__Array
} // namespace app::classes::types
