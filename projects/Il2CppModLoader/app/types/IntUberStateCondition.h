#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntUberStateCondition {
        inline app::IntUberStateCondition__Class** type_info = (app::IntUberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x04744C68));
        inline app::IntUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::IntUberStateCondition__Class>(type_info, "", "IntUberStateCondition");
        }
        inline app::IntUberStateCondition* create() {
            return il2cpp::create_object<app::IntUberStateCondition>(get_class());
        }
    } // namespace IntUberStateCondition
} // namespace app::classes::types
