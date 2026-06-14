#pragma once
#include <Modloader/app/structs/SafeGPtrArrayHandle.h>
#include <Modloader/app/structs/SafeGPtrArrayHandle__Boxed.h>
#include <Modloader/app/structs/SafeGPtrArrayHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeGPtrArrayHandle {
        inline app::SafeGPtrArrayHandle__Class** type_info() {
            static app::SafeGPtrArrayHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SafeGPtrArrayHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SafeGPtrArrayHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeGPtrArrayHandle__Class>(type_info(), "Mono", "SafeGPtrArrayHandle");
        }
        inline app::SafeGPtrArrayHandle* create() {
            return il2cpp::create_object<app::SafeGPtrArrayHandle>(get_class());
        }
        inline app::SafeGPtrArrayHandle__Boxed* box(app::SafeGPtrArrayHandle value) {
            return il2cpp::box_value<app::SafeGPtrArrayHandle__Boxed>(get_class(), value);
        }
    } // namespace SafeGPtrArrayHandle
} // namespace app::classes::types
