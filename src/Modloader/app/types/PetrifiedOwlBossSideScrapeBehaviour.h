#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossSideScrapeBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossSideScrapeBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossSideScrapeBehaviour {
        inline app::PetrifiedOwlBossSideScrapeBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossSideScrapeBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlBossSideScrapeBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04737A50));
            }
            return cache;
        }
        inline app::PetrifiedOwlBossSideScrapeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossSideScrapeBehaviour__Class>(type_info(), "", "PetrifiedOwlBossSideScrapeBehaviour");
        }
        inline app::PetrifiedOwlBossSideScrapeBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossSideScrapeBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossSideScrapeBehaviour
} // namespace app::classes::types
