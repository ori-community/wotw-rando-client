#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TailoringInfo__Array {
        inline app::TailoringInfo__Array__Class** type_info = (app::TailoringInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FF88));
        inline app::TailoringInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TailoringInfo__Array__Class>(type_info, "Mono.Globalization.Unicode", "TailoringInfo[]");
        }
        inline app::TailoringInfo__Array* create() {
            return il2cpp::create_object<app::TailoringInfo__Array>(get_class());
        }
    } // namespace TailoringInfo__Array
} // namespace app::classes::types
