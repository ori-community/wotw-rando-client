#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossTripleSlamBehaviour {
        inline app::PetrifiedOwlBossTripleSlamBehaviour__Class** type_info = (app::PetrifiedOwlBossTripleSlamBehaviour__Class**)(modloader::win::memory::resolve_rva(0x047129E0));
        inline app::PetrifiedOwlBossTripleSlamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossTripleSlamBehaviour__Class>(type_info, "", "PetrifiedOwlBossTripleSlamBehaviour");
        }
        inline app::PetrifiedOwlBossTripleSlamBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossTripleSlamBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossTripleSlamBehaviour
} // namespace app::classes::types
