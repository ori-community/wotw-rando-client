#pragma once
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfoPtr.h>
#include <Modloader/app/structs/RuntimeStructs_GenericParamInfoPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_GenericParamInfoPtr {
        inline app::RuntimeStructs_GenericParamInfoPtr__Class** type_info() {
            static app::RuntimeStructs_GenericParamInfoPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_GenericParamInfoPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_GenericParamInfoPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_GenericParamInfoPtr__Class>(type_info(), "Mono", "RuntimeStructs+GenericParamInfo*");
        }
        inline app::RuntimeStructs_GenericParamInfoPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_GenericParamInfoPtr>(get_class());
        }
    } // namespace RuntimeStructs_GenericParamInfoPtr
} // namespace app::classes::types
