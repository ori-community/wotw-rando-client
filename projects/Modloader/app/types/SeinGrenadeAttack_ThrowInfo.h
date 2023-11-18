#pragma once
#include <Modloader/app/structs/SeinGrenadeAttack_ThrowInfo.h>
#include <Modloader/app/structs/SeinGrenadeAttack_ThrowInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_ThrowInfo {
        inline app::SeinGrenadeAttack_ThrowInfo__Class** type_info() {
            static app::SeinGrenadeAttack_ThrowInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrenadeAttack_ThrowInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrenadeAttack_ThrowInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrenadeAttack_ThrowInfo__Class>(type_info(), "", "SeinGrenadeAttack", "ThrowInfo");
        }
        inline app::SeinGrenadeAttack_ThrowInfo* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_ThrowInfo>(get_class());
        }
    } // namespace SeinGrenadeAttack_ThrowInfo
} // namespace app::classes::types
