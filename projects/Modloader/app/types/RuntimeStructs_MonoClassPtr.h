#pragma once
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtr.h>
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_MonoClassPtr {
        inline app::RuntimeStructs_MonoClassPtr__Class** type_info() {
            static app::RuntimeStructs_MonoClassPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_MonoClassPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_MonoClassPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_MonoClassPtr__Class>(type_info(), "Mono", "RuntimeStructs+MonoClass*");
        }
        inline app::RuntimeStructs_MonoClassPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_MonoClassPtr>(get_class());
        }
    } // namespace RuntimeStructs_MonoClassPtr
} // namespace app::classes::types
