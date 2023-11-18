#pragma once
#include <Modloader/app/structs/IntPtr__Array.h>
#include <Modloader/app/structs/IntPtr__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntPtr__Array {
        inline app::IntPtr__Array__Class** type_info() {
            static app::IntPtr__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntPtr__Array__Class**)(modloader::win::memory::resolve_rva(0x0471E010));
            }
            return cache;
        }
        inline app::IntPtr__Array__Class* get_class() {
            return il2cpp::get_class<app::IntPtr__Array__Class>(type_info(), "System", "IntPtr[]");
        }
        inline app::IntPtr__Array* create() {
            return il2cpp::create_object<app::IntPtr__Array>(get_class());
        }
    } // namespace IntPtr__Array
} // namespace app::classes::types
