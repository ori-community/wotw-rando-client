#pragma once
#include <Modloader/app/structs/Int32Ptr.h>
#include <Modloader/app/structs/Int32Ptr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int32Ptr {
        inline app::Int32Ptr__Class** type_info() {
            static app::Int32Ptr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Int32Ptr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Int32Ptr__Class* get_class() {
            return il2cpp::get_class<app::Int32Ptr__Class>(type_info(), "System", "Int32*");
        }
        inline app::Int32Ptr* create() {
            return il2cpp::create_object<app::Int32Ptr>(get_class());
        }
    } // namespace Int32Ptr
} // namespace app::classes::types
