#pragma once
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/PetrifiedOwlStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlStats {
        inline app::PetrifiedOwlStats__Class** type_info() {
            static app::PetrifiedOwlStats__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlStats__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlStats__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlStats__Class>(type_info(), "", "PetrifiedOwlStats");
        }
        inline app::PetrifiedOwlStats* create() {
            return il2cpp::create_object<app::PetrifiedOwlStats>(get_class());
        }
    } // namespace PetrifiedOwlStats
} // namespace app::classes::types
