#pragma once
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtrPtr.h>
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtrPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeStructs_MonoClassPtrPtr {
        inline app::RuntimeStructs_MonoClassPtrPtr__Class** type_info() {
            static app::RuntimeStructs_MonoClassPtrPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeStructs_MonoClassPtrPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeStructs_MonoClassPtrPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_MonoClassPtrPtr__Class>(type_info(), "Mono", "RuntimeStructs+MonoClass**");
        }
        inline app::RuntimeStructs_MonoClassPtrPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_MonoClassPtrPtr>(get_class());
        }
    } // namespace RuntimeStructs_MonoClassPtrPtr
} // namespace app::classes::types
