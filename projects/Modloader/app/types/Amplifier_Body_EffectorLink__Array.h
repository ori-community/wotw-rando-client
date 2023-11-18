#pragma once
#include <Modloader/app/structs/Amplifier_Body_EffectorLink__Array.h>
#include <Modloader/app/structs/Amplifier_Body_EffectorLink__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Amplifier_Body_EffectorLink__Array {
        inline app::Amplifier_Body_EffectorLink__Array__Class** type_info() {
            static app::Amplifier_Body_EffectorLink__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Amplifier_Body_EffectorLink__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Amplifier_Body_EffectorLink__Array__Class* get_class() {
            return il2cpp::get_class<app::Amplifier_Body_EffectorLink__Array__Class>(type_info(), "RootMotion.FinalIK", "Amplifier+Body+EffectorLink[]");
        }
        inline app::Amplifier_Body_EffectorLink__Array* create() {
            return il2cpp::create_object<app::Amplifier_Body_EffectorLink__Array>(get_class());
        }
    } // namespace Amplifier_Body_EffectorLink__Array
} // namespace app::classes::types
