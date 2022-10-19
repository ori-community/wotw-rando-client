#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransitionSetupData {
        namespace {
            inline app::TransitionSetupData__Class* type_info_ref = nullptr;
        }
        inline app::TransitionSetupData__Class** type_info = &type_info_ref;
        inline app::TransitionSetupData__Class* get_class() {
            return il2cpp::get_class<app::TransitionSetupData__Class>(type_info, "", "TransitionSetupData");
        }
        inline app::TransitionSetupData* create() {
            return il2cpp::create_object<app::TransitionSetupData>(get_class());
        }
    } // namespace TransitionSetupData
} // namespace app::classes::types
