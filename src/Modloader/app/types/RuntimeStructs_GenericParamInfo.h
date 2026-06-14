#pragma once
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo.h>
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo__Boxed.h>
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_GenericParamInfo {
        inline app::RuntimeStructs_GenericParamInfo__Class** type_info() {
            static app::RuntimeStructs_GenericParamInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_GenericParamInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_GenericParamInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_GenericParamInfo__Class>(type_info(), "Mono", "RuntimeStructs", "GenericParamInfo");
        }
        inline app::RuntimeStructs_GenericParamInfo* create() {
            return il2cpp::create_object<app::RuntimeStructs_GenericParamInfo>(get_class());
        }
        inline app::RuntimeStructs_GenericParamInfo__Boxed* box(app::RuntimeStructs_GenericParamInfo value) {
            return il2cpp::box_value<app::RuntimeStructs_GenericParamInfo__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_GenericParamInfo
} // namespace app::classes::types
