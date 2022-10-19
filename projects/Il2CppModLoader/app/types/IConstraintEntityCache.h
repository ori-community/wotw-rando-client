#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IConstraintEntityCache {
        inline app::IConstraintEntityCache__Class** type_info = (app::IConstraintEntityCache__Class**)(modloader::win::memory::resolve_rva(0x0474D328));
        inline app::IConstraintEntityCache__Class* get_class() {
            return il2cpp::get_class<app::IConstraintEntityCache__Class>(type_info, "Moon.Timeline.Constraints", "IConstraintEntityCache");
        }
    } // namespace IConstraintEntityCache
} // namespace app::classes::types
