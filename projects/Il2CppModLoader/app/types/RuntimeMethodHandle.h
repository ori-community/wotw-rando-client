#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeMethodHandle {
        inline app::RuntimeMethodHandle__Class** type_info = (app::RuntimeMethodHandle__Class**)(modloader::win::memory::resolve_rva(0x047825F8));
        inline app::RuntimeMethodHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeMethodHandle__Class>(type_info, "System", "RuntimeMethodHandle");
        }
        inline app::RuntimeMethodHandle* create() {
            return il2cpp::create_object<app::RuntimeMethodHandle>(get_class());
        }
        inline app::RuntimeMethodHandle__Boxed* box(app::RuntimeMethodHandle value) {
            return il2cpp::box_value<app::RuntimeMethodHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeMethodHandle
} // namespace app::classes::types
