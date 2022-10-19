#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rect__Array {
        inline app::Rect__Array__Class** type_info = (app::Rect__Array__Class**)(modloader::win::memory::resolve_rva(0x04743538));
        inline app::Rect__Array__Class* get_class() {
            return il2cpp::get_class<app::Rect__Array__Class>(type_info, "UnityEngine", "Rect[]");
        }
        inline app::Rect__Array* create() {
            return il2cpp::create_object<app::Rect__Array>(get_class());
        }
    } // namespace Rect__Array
} // namespace app::classes::types
