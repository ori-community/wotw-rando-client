#pragma once
#include <Modloader/app/structs/VerletBreakTrigger.h>
#include <Modloader/app/structs/VerletBreakTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBreakTrigger {
        inline app::VerletBreakTrigger__Class** type_info() {
            static app::VerletBreakTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletBreakTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletBreakTrigger__Class* get_class() {
            return il2cpp::get_class<app::VerletBreakTrigger__Class>(type_info(), "", "VerletBreakTrigger");
        }
        inline app::VerletBreakTrigger* create() {
            return il2cpp::create_object<app::VerletBreakTrigger>(get_class());
        }
    } // namespace VerletBreakTrigger
} // namespace app::classes::types
