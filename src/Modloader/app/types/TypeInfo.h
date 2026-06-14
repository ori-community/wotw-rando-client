#pragma once
#include <Modloader/app/structs/TypeInfo.h>
#include <Modloader/app/structs/TypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeInfo {
        inline app::TypeInfo__Class** type_info() {
            static app::TypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::TypeInfo__Class>(type_info(), "System.Reflection", "TypeInfo");
        }
        inline app::TypeInfo* create() {
            return il2cpp::create_object<app::TypeInfo>(get_class());
        }
    } // namespace TypeInfo
} // namespace app::classes::types
