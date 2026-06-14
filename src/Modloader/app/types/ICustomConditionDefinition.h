#pragma once
#include <Modloader/app/structs/ICustomConditionDefinition.h>
#include <Modloader/app/structs/ICustomConditionDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICustomConditionDefinition {
        inline app::ICustomConditionDefinition__Class** type_info() {
            static app::ICustomConditionDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICustomConditionDefinition__Class**)(modloader::win::memory::resolve_rva(0x04718F58));
            }
            return cache;
        }
        inline app::ICustomConditionDefinition__Class* get_class() {
            return il2cpp::get_class<app::ICustomConditionDefinition__Class>(type_info(), "", "ICustomConditionDefinition");
        }
    } // namespace ICustomConditionDefinition
} // namespace app::classes::types
