#pragma once
#include <Modloader/app/structs/RuntimeParameterInfo.h>
#include <Modloader/app/structs/RuntimeParameterInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeParameterInfo {
        inline app::RuntimeParameterInfo__Class** type_info() {
            static app::RuntimeParameterInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeParameterInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeParameterInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimeParameterInfo__Class>(type_info(), "System.Reflection", "RuntimeParameterInfo");
        }
        inline app::RuntimeParameterInfo* create() {
            return il2cpp::create_object<app::RuntimeParameterInfo>(get_class());
        }
    } // namespace RuntimeParameterInfo
} // namespace app::classes::types
