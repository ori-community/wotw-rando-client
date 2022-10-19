#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceSkipAction {
        namespace {
            inline app::RaceSkipAction__Class* type_info_ref = nullptr;
        }
        inline app::RaceSkipAction__Class** type_info = &type_info_ref;
        inline app::RaceSkipAction__Class* get_class() {
            return il2cpp::get_class<app::RaceSkipAction__Class>(type_info, "Moon.Race", "RaceSkipAction");
        }
        inline app::RaceSkipAction* create() {
            return il2cpp::create_object<app::RaceSkipAction>(get_class());
        }
    } // namespace RaceSkipAction
} // namespace app::classes::types
