#pragma once
#include <Modloader/app/structs/RuntimeStructs_GPtrArrayPtr.h>
#include <Modloader/app/structs/RuntimeStructs_GPtrArrayPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_GPtrArrayPtr {
        inline app::RuntimeStructs_GPtrArrayPtr__Class** type_info() {
            static app::RuntimeStructs_GPtrArrayPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_GPtrArrayPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_GPtrArrayPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_GPtrArrayPtr__Class>(type_info(), "Mono", "RuntimeStructs+GPtrArray*");
        }
        inline app::RuntimeStructs_GPtrArrayPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_GPtrArrayPtr>(get_class());
        }
    } // namespace RuntimeStructs_GPtrArrayPtr
} // namespace app::classes::types
