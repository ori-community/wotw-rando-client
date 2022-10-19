#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwarmSuspendWhenOutOfFrustrum {
        namespace {
            inline app::SwarmSuspendWhenOutOfFrustrum__Class* type_info_ref = nullptr;
        }
        inline app::SwarmSuspendWhenOutOfFrustrum__Class** type_info = &type_info_ref;
        inline app::SwarmSuspendWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::SwarmSuspendWhenOutOfFrustrum__Class>(type_info, "", "SwarmSuspendWhenOutOfFrustrum");
        }
        inline app::SwarmSuspendWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::SwarmSuspendWhenOutOfFrustrum>(get_class());
        }
    } // namespace SwarmSuspendWhenOutOfFrustrum
} // namespace app::classes::types
