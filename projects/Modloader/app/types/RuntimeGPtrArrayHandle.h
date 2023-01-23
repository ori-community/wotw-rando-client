#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeGPtrArrayHandle__Class.h>
#include <Modloader/app/structs/RuntimeGPtrArrayHandle.h>
#include <Modloader/app/structs/RuntimeGPtrArrayHandle__Boxed.h>

namespace app::classes::types {
    namespace RuntimeGPtrArrayHandle {
        namespace {
            inline app::RuntimeGPtrArrayHandle__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeGPtrArrayHandle__Class** type_info = &type_info_ref;
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
