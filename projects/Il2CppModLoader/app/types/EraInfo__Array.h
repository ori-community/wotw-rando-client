#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EraInfo__Array {
        inline app::EraInfo__Array__Class** type_info = (app::EraInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0471EE18));
        inline app::EraInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::EraInfo__Array__Class>(type_info, "System.Globalization", "EraInfo[]");
        }
        inline app::EraInfo__Array* create() {
            return il2cpp::create_object<app::EraInfo__Array>(get_class());
        }
    } // namespace EraInfo__Array
} // namespace app::classes::types
