#pragma once
#include <Modloader/app/structs/SplitTurnAnimation__Array.h>
#include <Modloader/app/structs/SplitTurnAnimation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplitTurnAnimation__Array {
        inline app::SplitTurnAnimation__Array__Class** type_info() {
            static app::SplitTurnAnimation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplitTurnAnimation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplitTurnAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::SplitTurnAnimation__Array__Class>(type_info(), "", "SplitTurnAnimation[]");
        }
        inline app::SplitTurnAnimation__Array* create() {
            return il2cpp::create_object<app::SplitTurnAnimation__Array>(get_class());
        }
    } // namespace SplitTurnAnimation__Array
} // namespace app::classes::types
