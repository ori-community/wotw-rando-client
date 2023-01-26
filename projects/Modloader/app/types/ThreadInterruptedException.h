#pragma once
#include <Modloader/app/structs/ThreadInterruptedException.h>
#include <Modloader/app/structs/ThreadInterruptedException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadInterruptedException {
        inline app::ThreadInterruptedException__Class** type_info() {
            static app::ThreadInterruptedException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadInterruptedException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadInterruptedException__Class* get_class() {
            return il2cpp::get_class<app::ThreadInterruptedException__Class>(type_info(), "System.Threading", "ThreadInterruptedException");
        }
        inline app::ThreadInterruptedException* create() {
            return il2cpp::create_object<app::ThreadInterruptedException>(get_class());
        }
    } // namespace ThreadInterruptedException
} // namespace app::classes::types
