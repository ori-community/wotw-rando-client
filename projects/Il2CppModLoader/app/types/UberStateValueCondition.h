#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateValueCondition {
        inline app::UberStateValueCondition__Class** type_info = (app::UberStateValueCondition__Class**)(modloader::win::memory::resolve_rva(0x0471C4A0));
        inline app::UberStateValueCondition__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueCondition__Class>(type_info, "", "UberStateValueCondition");
        }
        inline app::UberStateValueCondition* create() {
            return il2cpp::create_object<app::UberStateValueCondition>(get_class());
        }
    } // namespace UberStateValueCondition
} // namespace app::classes::types
