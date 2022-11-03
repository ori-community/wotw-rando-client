#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UIntPtr {
        inline app::UIntPtr__Class** type_info = (app::UIntPtr__Class**)(modloader::win::memory::resolve_rva(0x0475C1C8));
        inline app::UIntPtr__Class* get_class() {
            return il2cpp::get_class<app::UIntPtr__Class>(type_info, "System", "UIntPtr");
        }
        inline app::UIntPtr* create() {
            return il2cpp::create_object<app::UIntPtr>(get_class());
        }
        inline app::UIntPtr__Boxed* box(void* value) {
            return il2cpp::box_value<app::UIntPtr__Boxed>(get_class(), value);
        }
        inline app::UIntPtr__Array* create_array(int size) {
            return il2cpp::array_new<app::UIntPtr__Array>(get_class(), size);
        }
        inline app::UIntPtr__Array* create_array(const std::vector<void*>& items) {
            return il2cpp::array_new<app::UIntPtr__Array>(get_class(), items);
        }
    } // namespace UIntPtr
} // namespace app::classes::types
