#pragma once
#include <Modloader/app/structs/Recoil_RecoilOffset__Array.h>
#include <Modloader/app/structs/Recoil_RecoilOffset__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Recoil_RecoilOffset__Array {
        inline app::Recoil_RecoilOffset__Array__Class** type_info() {
            static app::Recoil_RecoilOffset__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Recoil_RecoilOffset__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Recoil_RecoilOffset__Array__Class* get_class() {
            return il2cpp::get_class<app::Recoil_RecoilOffset__Array__Class>(type_info(), "RootMotion.FinalIK", "Recoil+RecoilOffset[]");
        }
        inline app::Recoil_RecoilOffset__Array* create() {
            return il2cpp::create_object<app::Recoil_RecoilOffset__Array>(get_class());
        }
    } // namespace Recoil_RecoilOffset__Array
} // namespace app::classes::types
