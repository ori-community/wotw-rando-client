#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeTypeHandle {
        inline app::RuntimeTypeHandle__Class** type_info = (app::RuntimeTypeHandle__Class**)(modloader::win::memory::resolve_rva(0x047690E8));
        inline app::RuntimeTypeHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeTypeHandle__Class>(type_info, "System", "RuntimeTypeHandle");
        }
        inline app::RuntimeTypeHandle* create() {
            return il2cpp::create_object<app::RuntimeTypeHandle>(get_class());
        }
        inline app::RuntimeTypeHandle__Boxed* box(app::RuntimeTypeHandle value) {
            return il2cpp::box_value<app::RuntimeTypeHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeTypeHandle
} // namespace app::classes::types
