#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeStructs_GenericParamInfo {
        namespace {
            inline app::RuntimeStructs_GenericParamInfo__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_GenericParamInfo__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_GenericParamInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_GenericParamInfo__Class>(type_info, "Mono", "RuntimeStructs", "GenericParamInfo");
        }
        inline app::RuntimeStructs_GenericParamInfo* create() {
            return il2cpp::create_object<app::RuntimeStructs_GenericParamInfo>(get_class());
        }
        inline app::RuntimeStructs_GenericParamInfo__Boxed* box(app::RuntimeStructs_GenericParamInfo value) {
            return il2cpp::box_value<app::RuntimeStructs_GenericParamInfo__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_GenericParamInfo
} // namespace app::classes::types
