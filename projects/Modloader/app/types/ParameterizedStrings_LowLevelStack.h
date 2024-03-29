#pragma once
#include <Modloader/app/structs/ParameterizedStrings_LowLevelStack.h>
#include <Modloader/app/structs/ParameterizedStrings_LowLevelStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParameterizedStrings_LowLevelStack {
        inline app::ParameterizedStrings_LowLevelStack__Class** type_info() {
            static app::ParameterizedStrings_LowLevelStack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParameterizedStrings_LowLevelStack__Class**)(modloader::win::memory::resolve_rva(0x04735BC0));
            }
            return cache;
        }
        inline app::ParameterizedStrings_LowLevelStack__Class* get_class() {
            return il2cpp::get_nested_class<app::ParameterizedStrings_LowLevelStack__Class>(type_info(), "System", "ParameterizedStrings", "LowLevelStack");
        }
        inline app::ParameterizedStrings_LowLevelStack* create() {
            return il2cpp::create_object<app::ParameterizedStrings_LowLevelStack>(get_class());
        }
    } // namespace ParameterizedStrings_LowLevelStack
} // namespace app::classes::types
