#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColliderEnterExitTrigger {
        namespace {
            inline app::ColliderEnterExitTrigger__Class* type_info_ref = nullptr;
        }
        inline app::ColliderEnterExitTrigger__Class** type_info = &type_info_ref;
        inline app::ColliderEnterExitTrigger__Class* get_class() {
            return il2cpp::get_class<app::ColliderEnterExitTrigger__Class>(type_info, "", "ColliderEnterExitTrigger");
        }
        inline app::ColliderEnterExitTrigger* create() {
            return il2cpp::create_object<app::ColliderEnterExitTrigger>(get_class());
        }
    } // namespace ColliderEnterExitTrigger
} // namespace app::classes::types
