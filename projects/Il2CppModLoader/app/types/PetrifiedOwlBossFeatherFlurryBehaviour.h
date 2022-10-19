#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossFeatherFlurryBehaviour {
        inline app::PetrifiedOwlBossFeatherFlurryBehaviour__Class** type_info = (app::PetrifiedOwlBossFeatherFlurryBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047842F8));
        inline app::PetrifiedOwlBossFeatherFlurryBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossFeatherFlurryBehaviour__Class>(type_info, "", "PetrifiedOwlBossFeatherFlurryBehaviour");
        }
        inline app::PetrifiedOwlBossFeatherFlurryBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossFeatherFlurryBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossFeatherFlurryBehaviour
} // namespace app::classes::types
