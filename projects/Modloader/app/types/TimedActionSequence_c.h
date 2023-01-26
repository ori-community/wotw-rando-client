#pragma once
#include <Modloader/app/structs/TimedActionSequence_c.h>
#include <Modloader/app/structs/TimedActionSequence_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimedActionSequence_c {
        inline app::TimedActionSequence_c__Class** type_info() {
            static app::TimedActionSequence_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimedActionSequence_c__Class**)(modloader::win::memory::resolve_rva(0x04786818));
            }
            return cache;
        }
        inline app::TimedActionSequence_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimedActionSequence_c__Class>(type_info(), "", "TimedActionSequence", "<>c");
        }
        inline app::TimedActionSequence_c* create() {
            return il2cpp::create_object<app::TimedActionSequence_c>(get_class());
        }
    } // namespace TimedActionSequence_c
} // namespace app::classes::types
