#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeGPtrArrayHandle {
        namespace {
            inline app::SafeGPtrArrayHandle__Class* type_info_ref = nullptr;
        }
        inline app::SafeGPtrArrayHandle__Class** type_info = &type_info_ref;
        inline app::SafeGPtrArrayHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeGPtrArrayHandle__Class>(type_info, "Mono", "SafeGPtrArrayHandle");
        }
        inline app::SafeGPtrArrayHandle* create() {
            return il2cpp::create_object<app::SafeGPtrArrayHandle>(get_class());
        }
        inline app::SafeGPtrArrayHandle__Boxed* box(app::SafeGPtrArrayHandle value) {
            return il2cpp::box_value<app::SafeGPtrArrayHandle__Boxed>(get_class(), value);
        }
    } // namespace SafeGPtrArrayHandle
} // namespace app::classes::types
