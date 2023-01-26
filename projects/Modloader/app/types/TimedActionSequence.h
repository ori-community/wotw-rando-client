#pragma once
#include <Modloader/app/structs/TimedActionSequence.h>
#include <Modloader/app/structs/TimedActionSequence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimedActionSequence {
        inline app::TimedActionSequence__Class** type_info() {
            static app::TimedActionSequence__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimedActionSequence__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimedActionSequence__Class* get_class() {
            return il2cpp::get_class<app::TimedActionSequence__Class>(type_info(), "", "TimedActionSequence");
        }
        inline app::TimedActionSequence* create() {
            return il2cpp::create_object<app::TimedActionSequence>(get_class());
        }
    } // namespace TimedActionSequence
} // namespace app::classes::types
