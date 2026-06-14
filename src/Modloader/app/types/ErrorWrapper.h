#pragma once
#include <Modloader/app/structs/ErrorWrapper.h>
#include <Modloader/app/structs/ErrorWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ErrorWrapper {
        inline app::ErrorWrapper__Class** type_info() {
            static app::ErrorWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ErrorWrapper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ErrorWrapper__Class* get_class() {
            return il2cpp::get_class<app::ErrorWrapper__Class>(type_info(), "System.Runtime.InteropServices", "ErrorWrapper");
        }
        inline app::ErrorWrapper* create() {
            return il2cpp::create_object<app::ErrorWrapper>(get_class());
        }
    } // namespace ErrorWrapper
} // namespace app::classes::types
