#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Recoil_RecoilOffset__Class.h>
#include <Modloader/app/structs/Recoil_RecoilOffset.h>
#include <Modloader/app/structs/Recoil_RecoilOffset__Array.h>

namespace app::classes::types {
    namespace Recoil_RecoilOffset {
        namespace {
            inline app::Recoil_RecoilOffset__Class* type_info_ref = nullptr;
        }
        inline app::Recoil_RecoilOffset__Class** type_info = &type_info_ref;
        inline app::Recoil_RecoilOffset__Class* get_class() {
            return il2cpp::get_nested_class<app::Recoil_RecoilOffset__Class>(type_info, "RootMotion.FinalIK", "Recoil", "RecoilOffset");
        }
        inline app::Recoil_RecoilOffset* create() {
            return il2cpp::create_object<app::Recoil_RecoilOffset>(get_class());
        }
        inline app::Recoil_RecoilOffset__Array* create_array(int size) {
            return il2cpp::array_new<app::Recoil_RecoilOffset__Array>(get_class(), size);
        }
        inline app::Recoil_RecoilOffset__Array* create_array(const std::vector<app::Recoil_RecoilOffset*>& items) {
            return il2cpp::array_new<app::Recoil_RecoilOffset__Array>(get_class(), items);
        }
    } // namespace Recoil_RecoilOffset
} // namespace app::classes::types
