#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ICustomConditionDefinition__Class.h>

namespace app::classes::types {
    namespace ICustomConditionDefinition {
        inline app::ICustomConditionDefinition__Class** type_info = (app::ICustomConditionDefinition__Class**)(modloader::win::memory::resolve_rva(0x04718F58));
        inline app::ICustomConditionDefinition__Class* get_class() {
            return il2cpp::get_class<app::ICustomConditionDefinition__Class>(type_info, "", "ICustomConditionDefinition");
        }
    } // namespace ICustomConditionDefinition
} // namespace app::classes::types
