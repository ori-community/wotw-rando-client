#pragma once
#include <Modloader/app/structs/WindSegment__Array.h>
#include <Modloader/app/structs/WindSegment__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindSegment__Array {
        inline app::WindSegment__Array__Class** type_info() {
            static app::WindSegment__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindSegment__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindSegment__Array__Class* get_class() {
            return il2cpp::get_class<app::WindSegment__Array__Class>(type_info(), "", "WindSegment[]");
        }
        inline app::WindSegment__Array* create() {
            return il2cpp::create_object<app::WindSegment__Array>(get_class());
        }
    } // namespace WindSegment__Array
} // namespace app::classes::types
