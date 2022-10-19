#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeGenericParamInfoHandle {
        namespace {
            inline app::RuntimeGenericParamInfoHandle__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeGenericParamInfoHandle__Class** type_info = &type_info_ref;
        inline app::RuntimeGenericParamInfoHandle__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGenericParamInfoHandle__Class>(type_info, "Mono", "RuntimeGenericParamInfoHandle");
        }
        inline app::RuntimeGenericParamInfoHandle* create() {
            return il2cpp::create_object<app::RuntimeGenericParamInfoHandle>(get_class());
        }
        inline app::RuntimeGenericParamInfoHandle__Boxed* box(app::RuntimeGenericParamInfoHandle value) {
            return il2cpp::box_value<app::RuntimeGenericParamInfoHandle__Boxed>(get_class(), value);
        }
    } // namespace RuntimeGenericParamInfoHandle
} // namespace app::classes::types
