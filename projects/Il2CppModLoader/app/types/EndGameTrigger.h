#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EndGameTrigger {
        namespace {
            app::EndGameTrigger__Class* type_info_ref = nullptr;
        }
        app::EndGameTrigger__Class** type_info = &type_info_ref;
        inline app::EndGameTrigger__Class* get_class() {
            return il2cpp::get_class<app::EndGameTrigger__Class>(type_info, "", "EndGameTrigger");
        }
        inline app::EndGameTrigger* create() {
            return il2cpp::create_object<app::EndGameTrigger>(get_class());
        }
    } // namespace EndGameTrigger
} // namespace app::classes::types
