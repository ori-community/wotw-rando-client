#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateConditionHelper {
        inline app::UberStateConditionHelper__Class** type_info = (app::UberStateConditionHelper__Class**)(modloader::win::memory::resolve_rva(0x04721BE8));
        inline app::UberStateConditionHelper__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionHelper__Class>(type_info, "", "UberStateConditionHelper");
        }
        inline app::UberStateConditionHelper* create() {
            return il2cpp::create_object<app::UberStateConditionHelper>(get_class());
        }
    } // namespace UberStateConditionHelper
} // namespace app::classes::types
