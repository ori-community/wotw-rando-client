#pragma once
#include <Modloader/app/structs/LineEntity__Array.h>
#include <Modloader/app/structs/LineEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LineEntity__Array {
        inline app::LineEntity__Array__Class** type_info() {
            static app::LineEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LineEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LineEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::LineEntity__Array__Class>(type_info(), "Moon.VisualDebug", "LineEntity[]");
        }
        inline app::LineEntity__Array* create() {
            return il2cpp::create_object<app::LineEntity__Array>(get_class());
        }
    } // namespace LineEntity__Array
} // namespace app::classes::types
