#pragma once
#include <Modloader/app/structs/RenderBuffer.h>
#include <Modloader/app/structs/RenderBuffer__Array.h>
#include <Modloader/app/structs/RenderBuffer__Boxed.h>
#include <Modloader/app/structs/RenderBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderBuffer {
        inline app::RenderBuffer__Class** type_info() {
            static app::RenderBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RenderBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RenderBuffer__Class* get_class() {
            return il2cpp::get_class<app::RenderBuffer__Class>(type_info(), "UnityEngine", "RenderBuffer");
        }
        inline app::RenderBuffer* create() {
            return il2cpp::create_object<app::RenderBuffer>(get_class());
        }
        inline app::RenderBuffer__Boxed* box(app::RenderBuffer value) {
            return il2cpp::box_value<app::RenderBuffer__Boxed>(get_class(), value);
        }
        inline app::RenderBuffer__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderBuffer__Array>(get_class(), size);
        }
        inline app::RenderBuffer__Array* create_array(const std::vector<app::RenderBuffer>& items) {
            return il2cpp::array_new<app::RenderBuffer__Array>(get_class(), items);
        }
    } // namespace RenderBuffer
} // namespace app::classes::types
