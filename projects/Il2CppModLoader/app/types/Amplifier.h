#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Amplifier {
        namespace {
            inline app::Amplifier__Class* type_info_ref = nullptr;
        }
        inline app::Amplifier__Class** type_info = &type_info_ref;
        inline app::Amplifier__Class* get_class() {
            return il2cpp::get_class<app::Amplifier__Class>(type_info, "RootMotion.FinalIK", "Amplifier");
        }
        inline app::Amplifier* create() {
            return il2cpp::create_object<app::Amplifier>(get_class());
        }
    } // namespace Amplifier
} // namespace app::classes::types
