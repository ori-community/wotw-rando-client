#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTimedTrigger {
        namespace {
            app::LegacyTimedTrigger__Class* type_info_ref = nullptr;
        }
        app::LegacyTimedTrigger__Class** type_info = &type_info_ref;
        inline app::LegacyTimedTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimedTrigger__Class>(type_info, "", "LegacyTimedTrigger");
        }
        inline app::LegacyTimedTrigger* create() {
            return il2cpp::create_object<app::LegacyTimedTrigger>(get_class());
        }
    } // namespace LegacyTimedTrigger
} // namespace app::classes::types
