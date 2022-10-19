#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Uri__Array {
        inline app::Uri__Array__Class** type_info = (app::Uri__Array__Class**)(modloader::win::memory::resolve_rva(0x04794538));
        inline app::Uri__Array__Class* get_class() {
            return il2cpp::get_class<app::Uri__Array__Class>(type_info, "System", "Uri[]");
        }
        inline app::Uri__Array* create() {
            return il2cpp::create_object<app::Uri__Array>(get_class());
        }
    } // namespace Uri__Array
} // namespace app::classes::types
