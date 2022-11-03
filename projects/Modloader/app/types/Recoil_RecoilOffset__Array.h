#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Recoil_RecoilOffset__Array {
        namespace {
            inline app::Recoil_RecoilOffset__Array__Class* type_info_ref = nullptr;
        }
        inline app::Recoil_RecoilOffset__Array__Class** type_info = &type_info_ref;
        inline app::Recoil_RecoilOffset__Array__Class* get_class() {
            return il2cpp::get_class<app::Recoil_RecoilOffset__Array__Class>(type_info, "RootMotion.FinalIK", "Recoil+RecoilOffset[]");
        }
        inline app::Recoil_RecoilOffset__Array* create() {
            return il2cpp::create_object<app::Recoil_RecoilOffset__Array>(get_class());
        }
    } // namespace Recoil_RecoilOffset__Array
} // namespace app::classes::types
