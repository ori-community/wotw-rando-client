#pragma once
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle.h>
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle__Boxed.h>
#include <Modloader/app/structs/RuntimeGenericParamInfoHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeGenericParamInfoHandle {
        inline app::RuntimeGenericParamInfoHandle__Class** type_info() {
            static app::RuntimeGenericParamInfoHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeGenericParamInfoHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeGenericParamInfoHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGenericParamInfoHandle__Class>(type_info(), "Mono", "RuntimeGenericParamInfoHandle");
        }
        inline app::RuntimeGenericParamInfoHandle* create() {
            return il2cpp::create_object<app::RuntimeGenericParamInfoHandle>(get_class());
        }
        inline app::RuntimeGenericParamInfoHandle__Boxed* box(app::RuntimeGenericParamInfoHandle value) {
            return il2cpp::box_value<app::RuntimeGenericParamInfoHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeGenericParamInfoHandle
} // namespace app::classes::types
