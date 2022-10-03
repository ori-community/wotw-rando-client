#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeGPtrArrayHandle {
        namespace {
            app::RuntimeGPtrArrayHandle__Class* type_info_ref = nullptr;
        }
        app::RuntimeGPtrArrayHandle__Class** type_info = &type_info_ref;
        inline app::RuntimeGPtrArrayHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGPtrArrayHandle__Class>(type_info, "Mono", "RuntimeGPtrArrayHandle");
        }
        inline app::RuntimeGPtrArrayHandle* create() {
            return il2cpp::create_object<app::RuntimeGPtrArrayHandle>(get_class());
        }
        inline app::RuntimeGPtrArrayHandle__Boxed* box(app::RuntimeGPtrArrayHandle value) {
            return il2cpp::box_value<app::RuntimeGPtrArrayHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeGPtrArrayHandle
} // namespace app::classes::types
