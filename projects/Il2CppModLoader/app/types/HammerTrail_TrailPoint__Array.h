#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HammerTrail_TrailPoint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HammerTrail_TrailPoint__Array__Class** type_info;
        inline app::HammerTrail_TrailPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::HammerTrail_TrailPoint__Array__Class>(type_info, "", "HammerTrail+TrailPoint[]");
        }
        inline app::HammerTrail_TrailPoint__Array* create() {
            return il2cpp::create_object<app::HammerTrail_TrailPoint__Array>(get_class());
        }
    } // namespace HammerTrail_TrailPoint__Array
} // namespace app::classes::types
