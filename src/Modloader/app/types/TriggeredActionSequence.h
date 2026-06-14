#pragma once
#include <Modloader/app/structs/TriggeredActionSequence.h>
#include <Modloader/app/structs/TriggeredActionSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggeredActionSequence {
        inline app::TriggeredActionSequence__Class** type_info() {
            static app::TriggeredActionSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggeredActionSequence__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggeredActionSequence__Class* get_class() {
            return il2cpp::get_class<app::TriggeredActionSequence__Class>(type_info(), "", "TriggeredActionSequence");
        }
        inline app::TriggeredActionSequence* create() {
            return il2cpp::create_object<app::TriggeredActionSequence>(get_class());
        }
    } // namespace TriggeredActionSequence
} // namespace app::classes::types
