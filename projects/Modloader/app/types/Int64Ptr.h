#pragma once
#include <Modloader/app/structs/Int64Ptr.h>
#include <Modloader/app/structs/Int64Ptr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int64Ptr {
        inline app::Int64Ptr__Class** type_info() {
            static app::Int64Ptr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Int64Ptr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Int64Ptr__Class* get_class() {
            return il2cpp::get_class<app::Int64Ptr__Class>(type_info(), "System", "Int64*");
        }
        inline app::Int64Ptr* create() {
            return il2cpp::create_object<app::Int64Ptr>(get_class());
        }
    } // namespace Int64Ptr
} // namespace app::classes::types
