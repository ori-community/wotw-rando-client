#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySeinLandOnTrigger {
        namespace {
            app::LegacySeinLandOnTrigger__Class* type_info_ref = nullptr;
        }
        app::LegacySeinLandOnTrigger__Class** type_info = &type_info_ref;
        inline app::LegacySeinLandOnTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacySeinLandOnTrigger__Class>(type_info, "", "LegacySeinLandOnTrigger");
        }
        inline app::LegacySeinLandOnTrigger* create() {
            return il2cpp::create_object<app::LegacySeinLandOnTrigger>(get_class());
        }
    } // namespace LegacySeinLandOnTrigger
} // namespace app::classes::types
