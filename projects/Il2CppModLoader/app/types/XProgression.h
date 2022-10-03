#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XProgression {
        namespace {
            app::XProgression__Class* type_info_ref = nullptr;
        }
        app::XProgression__Class** type_info = &type_info_ref;
        inline app::XProgression__Class* get_class() {
            return il2cpp::get_class<app::XProgression__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XProgression");
        }
        inline app::XProgression* create() {
            return il2cpp::create_object<app::XProgression>(get_class());
        }
    } // namespace XProgression
} // namespace app::classes::types
