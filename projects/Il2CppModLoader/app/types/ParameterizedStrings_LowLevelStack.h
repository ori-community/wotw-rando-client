#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParameterizedStrings_LowLevelStack {
        inline app::ParameterizedStrings_LowLevelStack__Class** type_info = (app::ParameterizedStrings_LowLevelStack__Class**)(modloader::win::memory::resolve_rva(0x04735BC0));
        inline app::ParameterizedStrings_LowLevelStack__Class* get_class() {
            return il2cpp::get_nested_class<app::ParameterizedStrings_LowLevelStack__Class>(type_info, "System", "ParameterizedStrings", "LowLevelStack");
        }
        inline app::ParameterizedStrings_LowLevelStack* create() {
            return il2cpp::create_object<app::ParameterizedStrings_LowLevelStack>(get_class());
        }
    } // namespace ParameterizedStrings_LowLevelStack
} // namespace app::classes::types
