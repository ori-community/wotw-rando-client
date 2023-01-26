#pragma once
#include <Modloader/app/structs/Recoil_RecoilOffset_EffectorLink.h>
#include <Modloader/app/structs/Recoil_RecoilOffset_EffectorLink__Array.h>
#include <Modloader/app/structs/Recoil_RecoilOffset_EffectorLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Recoil_RecoilOffset_EffectorLink {
        inline app::Recoil_RecoilOffset_EffectorLink__Class** type_info() {
            static app::Recoil_RecoilOffset_EffectorLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Recoil_RecoilOffset_EffectorLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Recoil_RecoilOffset_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::Recoil_RecoilOffset_EffectorLink__Class>(type_info(), "RootMotion.FinalIK", "Recoil+RecoilOffset", "EffectorLink");
        }
        inline app::Recoil_RecoilOffset_EffectorLink* create() {
            return il2cpp::create_object<app::Recoil_RecoilOffset_EffectorLink>(get_class());
        }
        inline app::Recoil_RecoilOffset_EffectorLink__Array* create_array(int size) {
            return il2cpp::array_new<app::Recoil_RecoilOffset_EffectorLink__Array>(get_class(), size);
        }
        inline app::Recoil_RecoilOffset_EffectorLink__Array* create_array(const std::vector<app::Recoil_RecoilOffset_EffectorLink*>& items) {
            return il2cpp::array_new<app::Recoil_RecoilOffset_EffectorLink__Array>(get_class(), items);
        }
    } // namespace Recoil_RecoilOffset_EffectorLink
} // namespace app::classes::types
