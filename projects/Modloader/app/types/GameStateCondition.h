#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameStateCondition {
        namespace {
            inline app::GameStateCondition__Class* type_info_ref = nullptr;
        }
        inline app::GameStateCondition__Class** type_info = &type_info_ref;
        inline app::GameStateCondition__Class* get_class() {
            return il2cpp::get_class<app::GameStateCondition__Class>(type_info, "", "GameStateCondition");
        }
        inline app::GameStateCondition* create() {
            return il2cpp::create_object<app::GameStateCondition>(get_class());
        }
    } // namespace GameStateCondition
} // namespace app::classes::types
