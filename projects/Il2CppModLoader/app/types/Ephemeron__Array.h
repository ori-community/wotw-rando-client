#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ephemeron__Array {
        inline app::Ephemeron__Array__Class** type_info = (app::Ephemeron__Array__Class**)(modloader::win::memory::resolve_rva(0x04755420));
        inline app::Ephemeron__Array__Class* get_class() {
            return il2cpp::get_class<app::Ephemeron__Array__Class>(type_info, "System.Runtime.CompilerServices", "Ephemeron[]");
        }
        inline app::Ephemeron__Array* create() {
            return il2cpp::create_object<app::Ephemeron__Array>(get_class());
        }
    } // namespace Ephemeron__Array
} // namespace app::classes::types
