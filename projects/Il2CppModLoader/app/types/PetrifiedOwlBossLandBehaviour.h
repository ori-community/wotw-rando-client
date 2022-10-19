#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour {
        inline app::PetrifiedOwlBossLandBehaviour__Class** type_info = (app::PetrifiedOwlBossLandBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04706FD0));
        inline app::PetrifiedOwlBossLandBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLandBehaviour__Class>(type_info, "", "PetrifiedOwlBossLandBehaviour");
        }
        inline app::PetrifiedOwlBossLandBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour
} // namespace app::classes::types
