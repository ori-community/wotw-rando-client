#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateChangeDefinition {
        namespace {
            inline app::StateChangeDefinition__Class* type_info_ref = nullptr;
        }
        inline app::StateChangeDefinition__Class** type_info = &type_info_ref;
        inline app::StateChangeDefinition__Class* get_class() {
            return il2cpp::get_class<app::StateChangeDefinition__Class>(type_info, "", "StateChangeDefinition");
        }
        inline app::StateChangeDefinition* create() {
            return il2cpp::create_object<app::StateChangeDefinition>(get_class());
        }
    } // namespace StateChangeDefinition
} // namespace app::classes::types
