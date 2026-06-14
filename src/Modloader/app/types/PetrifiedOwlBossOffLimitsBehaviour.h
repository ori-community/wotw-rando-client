#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossOffLimitsBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossOffLimitsBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossOffLimitsBehaviour {
        inline app::PetrifiedOwlBossOffLimitsBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossOffLimitsBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossOffLimitsBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04771588));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossOffLimitsBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossOffLimitsBehaviour__Class>(type_info(), "", "PetrifiedOwlBossOffLimitsBehaviour");
        }
        inline app::PetrifiedOwlBossOffLimitsBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossOffLimitsBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossOffLimitsBehaviour
} // namespace app::classes::types
