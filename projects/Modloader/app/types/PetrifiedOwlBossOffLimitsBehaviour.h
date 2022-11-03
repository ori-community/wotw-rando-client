#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossOffLimitsBehaviour {
        inline app::PetrifiedOwlBossOffLimitsBehaviour__Class** type_info = (app::PetrifiedOwlBossOffLimitsBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04771588));
        inline app::PetrifiedOwlBossOffLimitsBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossOffLimitsBehaviour__Class>(type_info, "", "PetrifiedOwlBossOffLimitsBehaviour");
        }
        inline app::PetrifiedOwlBossOffLimitsBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossOffLimitsBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossOffLimitsBehaviour
} // namespace app::classes::types
