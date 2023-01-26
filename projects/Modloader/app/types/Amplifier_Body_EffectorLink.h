#pragma once
#include <Modloader/app/structs/Amplifier_Body_EffectorLink.h>
#include <Modloader/app/structs/Amplifier_Body_EffectorLink__Array.h>
#include <Modloader/app/structs/Amplifier_Body_EffectorLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Amplifier_Body_EffectorLink {
        inline app::Amplifier_Body_EffectorLink__Class** type_info() {
            static app::Amplifier_Body_EffectorLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Amplifier_Body_EffectorLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Amplifier_Body_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::Amplifier_Body_EffectorLink__Class>(type_info(), "RootMotion.FinalIK", "Amplifier+Body", "EffectorLink");
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
