#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Amplifier_Body_EffectorLink {
        namespace {
            inline app::Amplifier_Body_EffectorLink__Class* type_info_ref = nullptr;
        }
        inline app::Amplifier_Body_EffectorLink__Class** type_info = &type_info_ref;
        inline app::Amplifier_Body_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::Amplifier_Body_EffectorLink__Class>(type_info, "RootMotion.FinalIK", "Amplifier+Body", "EffectorLink");
        }
        inline app::Amplifier_Body_EffectorLink* create() {
            return il2cpp::create_object<app::Amplifier_Body_EffectorLink>(get_class());
        }
        inline app::Amplifier_Body_EffectorLink__Array* create_array(int size) {
            return il2cpp::array_new<app::Amplifier_Body_EffectorLink__Array>(get_class(), size);
        }
        inline app::Amplifier_Body_EffectorLink__Array* create_array(const std::vector<app::Amplifier_Body_EffectorLink*>& items) {
            return il2cpp::array_new<app::Amplifier_Body_EffectorLink__Array>(get_class(), items);
        }
    } // namespace Amplifier_Body_EffectorLink
} // namespace app::classes::types
