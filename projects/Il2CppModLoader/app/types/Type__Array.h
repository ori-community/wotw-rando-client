#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Type__Array {
        inline app::Type__Array__Class** type_info = (app::Type__Array__Class**)(modloader::win::memory::resolve_rva(0x04767038));
        inline app::Type__Array__Class* get_class() {
            return il2cpp::get_class<app::Type__Array__Class>(type_info, "System", "Type[]");
        }
        inline app::Type__Array* create() {
            return il2cpp::create_object<app::Type__Array>(get_class());
        }
    } // namespace Type__Array
} // namespace app::classes::types
