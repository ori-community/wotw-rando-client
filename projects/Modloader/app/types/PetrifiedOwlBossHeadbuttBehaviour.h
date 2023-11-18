#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossHeadbuttBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossHeadbuttBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossHeadbuttBehaviour {
        inline app::PetrifiedOwlBossHeadbuttBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossHeadbuttBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossHeadbuttBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossHeadbuttBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossHeadbuttBehaviour__Class>(type_info(), "", "PetrifiedOwlBossHeadbuttBehaviour");
        }
        inline app::PetrifiedOwlBossHeadbuttBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossHeadbuttBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossHeadbuttBehaviour
} // namespace app::classes::types
