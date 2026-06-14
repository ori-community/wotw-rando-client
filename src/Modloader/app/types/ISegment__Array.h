#pragma once
#include <Modloader/app/structs/ISegment__Array.h>
#include <Modloader/app/structs/ISegment__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISegment__Array {
        inline app::ISegment__Array__Class** type_info() {
            static app::ISegment__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISegment__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISegment__Array__Class* get_class() {
            return il2cpp::get_class<app::ISegment__Array__Class>(type_info(), "TriangleNet.Geometry", "ISegment[]");
        }
        inline app::ISegment__Array* create() {
            return il2cpp::create_object<app::ISegment__Array>(get_class());
        }
    } // namespace ISegment__Array
} // namespace app::classes::types
