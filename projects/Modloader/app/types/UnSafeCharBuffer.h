#pragma once
#include <Modloader/app/structs/UnSafeCharBuffer.h>
#include <Modloader/app/structs/UnSafeCharBuffer__Boxed.h>
#include <Modloader/app/structs/UnSafeCharBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnSafeCharBuffer {
        inline app::UnSafeCharBuffer__Class** type_info() {
            static app::UnSafeCharBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnSafeCharBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnSafeCharBuffer__Class* get_class() {
            return il2cpp::get_class<app::UnSafeCharBuffer__Class>(type_info(), "System", "UnSafeCharBuffer");
        }
        inline app::UnSafeCharBuffer* create() {
            return il2cpp::create_object<app::UnSafeCharBuffer>(get_class());
        }
        inline app::UnSafeCharBuffer__Boxed* box(app::UnSafeCharBuffer value) {
            return il2cpp::box_value<app::UnSafeCharBuffer__Boxed>(get_class(), value);
        }
    } // namespace UnSafeCharBuffer
} // namespace app::classes::types
