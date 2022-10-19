#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArgumentOutOfRangeException {
        inline app::ArgumentOutOfRangeException__Class** type_info = (app::ArgumentOutOfRangeException__Class**)(modloader::win::memory::resolve_rva(0x047918E0));
        inline app::ArgumentOutOfRangeException__Class* get_class() {
            return il2cpp::get_class<app::ArgumentOutOfRangeException__Class>(type_info, "System", "ArgumentOutOfRangeException");
        }
        inline app::ArgumentOutOfRangeException* create() {
            return il2cpp::create_object<app::ArgumentOutOfRangeException>(get_class());
        }
    } // namespace ArgumentOutOfRangeException
} // namespace app::classes::types
