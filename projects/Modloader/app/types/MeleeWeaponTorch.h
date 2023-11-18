#pragma once
#include <Modloader/app/structs/MeleeWeaponTorch.h>
#include <Modloader/app/structs/MeleeWeaponTorch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeWeaponTorch {
        inline app::MeleeWeaponTorch__Class** type_info() {
            static app::MeleeWeaponTorch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeWeaponTorch__Class**)(modloader::win::memory::resolve_rva(0x0473FF50));
            }
            return cache;
        }
        inline app::MeleeWeaponTorch__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeaponTorch__Class>(type_info(), "", "MeleeWeaponTorch");
        }
        inline app::MeleeWeaponTorch* create() {
            return il2cpp::create_object<app::MeleeWeaponTorch>(get_class());
        }
    } // namespace MeleeWeaponTorch
} // namespace app::classes::types
