#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnSafeCharBuffer {
        namespace {
            inline app::UnSafeCharBuffer__Class* type_info_ref = nullptr;
        }
        inline app::UnSafeCharBuffer__Class** type_info = &type_info_ref;
        inline app::UnSafeCharBuffer__Class* get_class() {
            return il2cpp::get_class<app::UnSafeCharBuffer__Class>(type_info, "System", "UnSafeCharBuffer");
        }
        inline app::UnSafeCharBuffer* create() {
            return il2cpp::create_object<app::UnSafeCharBuffer>(get_class());
        }
        inline app::UnSafeCharBuffer__Boxed* box(app::UnSafeCharBuffer value) {
            return il2cpp::box_value<app::UnSafeCharBuffer__Boxed>(get_class(), value);
        }
    } // namespace UnSafeCharBuffer
} // namespace app::classes::types
