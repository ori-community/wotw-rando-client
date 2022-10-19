#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetNightberryPositionAction {
        namespace {
            inline app::SetNightberryPositionAction__Class* type_info_ref = nullptr;
        }
        inline app::SetNightberryPositionAction__Class** type_info = &type_info_ref;
        inline app::SetNightberryPositionAction__Class* get_class() {
            return il2cpp::get_class<app::SetNightberryPositionAction__Class>(type_info, "", "SetNightberryPositionAction");
        }
        inline app::SetNightberryPositionAction* create() {
            return il2cpp::create_object<app::SetNightberryPositionAction>(get_class());
        }
    } // namespace SetNightberryPositionAction
} // namespace app::classes::types
