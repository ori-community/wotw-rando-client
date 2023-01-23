#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Amplifier_Body_EffectorLink__Array__Class.h>
#include <Modloader/app/structs/Amplifier_Body_EffectorLink__Array.h>

namespace app::classes::types {
    namespace Amplifier_Body_EffectorLink__Array {
        namespace {
            inline app::Amplifier_Body_EffectorLink__Array__Class* type_info_ref = nullptr;
        }
        inline app::Amplifier_Body_EffectorLink__Array__Class** type_info = &type_info_ref;
        inline app::Amplifier_Body_EffectorLink__Array__Class* get_class() {
            return il2cpp::get_class<app::Amplifier_Body_EffectorLink__Array__Class>(type_info, "RootMotion.FinalIK", "Amplifier+Body+EffectorLink[]");
        }
        inline app::Amplifier_Body_EffectorLink__Array* create() {
            return il2cpp::create_object<app::Amplifier_Body_EffectorLink__Array>(get_class());
        }
    } // namespace Amplifier_Body_EffectorLink__Array
} // namespace app::classes::types
