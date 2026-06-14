#pragma once
#include <Modloader/app/structs/WaitHandle__Array.h>
#include <Modloader/app/structs/WaitHandle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitHandle__Array {
        inline app::WaitHandle__Array__Class** type_info() {
            static app::WaitHandle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WaitHandle__Array__Class**)(modloader::win::memory::resolve_rva(0x04720A40));
            }
            return cache;
        }
        inline app::WaitHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::WaitHandle__Array__Class>(type_info(), "System.Threading", "WaitHandle[]");
        }
        inline app::WaitHandle__Array* create() {
            return il2cpp::create_object<app::WaitHandle__Array>(get_class());
        }
    } // namespace WaitHandle__Array
} // namespace app::classes::types
