#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmbiguousMatchException {
        inline app::AmbiguousMatchException__Class** type_info = (app::AmbiguousMatchException__Class**)(modloader::win::memory::resolve_rva(0x0473F350));
        inline app::AmbiguousMatchException__Class* get_class() {
            return il2cpp::get_class<app::AmbiguousMatchException__Class>(type_info, "System.Reflection", "AmbiguousMatchException");
        }
        inline app::AmbiguousMatchException* create() {
            return il2cpp::create_object<app::AmbiguousMatchException>(get_class());
        }
    } // namespace AmbiguousMatchException
} // namespace app::classes::types
