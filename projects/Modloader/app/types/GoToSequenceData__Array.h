#pragma once
#include <Modloader/app/structs/GoToSequenceData__Array.h>
#include <Modloader/app/structs/GoToSequenceData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoToSequenceData__Array {
        inline app::GoToSequenceData__Array__Class** type_info() {
            static app::GoToSequenceData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GoToSequenceData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GoToSequenceData__Array__Class* get_class() {
            return il2cpp::get_class<app::GoToSequenceData__Array__Class>(type_info(), "", "GoToSequenceData[]");
        }
        inline app::GoToSequenceData__Array* create() {
            return il2cpp::create_object<app::GoToSequenceData__Array>(get_class());
        }
    } // namespace GoToSequenceData__Array
} // namespace app::classes::types
