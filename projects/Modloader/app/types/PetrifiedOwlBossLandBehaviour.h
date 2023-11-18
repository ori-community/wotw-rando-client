#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLandBehaviour {
        inline app::PetrifiedOwlBossLandBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossLandBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossLandBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04706FD0));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLandBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossLandBehaviour__Class>(type_info(), "", "PetrifiedOwlBossLandBehaviour");
        }
        inline app::PetrifiedOwlBossLandBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLandBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossLandBehaviour
} // namespace app::classes::types
