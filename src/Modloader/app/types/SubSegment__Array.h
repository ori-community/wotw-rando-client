#pragma once
#include <Modloader/app/structs/SubSegment__Array.h>
#include <Modloader/app/structs/SubSegment__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubSegment__Array {
        inline app::SubSegment__Array__Class** type_info() {
            static app::SubSegment__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SubSegment__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SubSegment__Array__Class* get_class() {
            return il2cpp::get_class<app::SubSegment__Array__Class>(type_info(), "TriangleNet.Topology", "SubSegment[]");
        }
        inline app::SubSegment__Array* create() {
            return il2cpp::create_object<app::SubSegment__Array>(get_class());
        }
    } // namespace SubSegment__Array
} // namespace app::classes::types
