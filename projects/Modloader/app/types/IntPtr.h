#pragma once
#include <Modloader/app/structs/IntPtr.h>
#include <Modloader/app/structs/IntPtr__Array.h>
#include <Modloader/app/structs/IntPtr__Boxed.h>
#include <Modloader/app/structs/IntPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntPtr {
        inline app::IntPtr__Class** type_info() {
            static app::IntPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntPtr__Class**)(modloader::win::memory::resolve_rva(0x0473DC40));
            }
            return cache;
        }
        inline app::IntPtr__Class* get_class() {
            return il2cpp::get_class<app::IntPtr__Class>(type_info(), "System", "IntPtr");
        }
        inline app::IntPtr* create() {
            return il2cpp::create_object<app::IntPtr>(get_class());
        }
        inline app::IntPtr__Boxed* box(void* value) {
            return il2cpp::box_value<app::IntPtr__Boxed>(get_class(), value);
        }
        inline app::IntPtr__Array* create_array(int size) {
            return il2cpp::array_new<app::IntPtr__Array>(get_class(), size);
        }
        inline app::IntPtr__Array* create_array(const std::vector<void*>& items) {
            return il2cpp::array_new<app::IntPtr__Array>(get_class(), items);
        }
    } // namespace IntPtr
} // namespace app::classes::types
