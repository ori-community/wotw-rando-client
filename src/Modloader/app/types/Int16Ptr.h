#pragma once
#include <Modloader/app/structs/Int16Ptr.h>
#include <Modloader/app/structs/Int16Ptr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int16Ptr {
        inline app::Int16Ptr__Class** type_info() {
            static app::Int16Ptr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Int16Ptr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Int16Ptr__Class* get_class() {
            return il2cpp::get_class<app::Int16Ptr__Class>(type_info(), "System", "Int16*");
        }
        inline app::Int16Ptr* create() {
            return il2cpp::create_object<app::Int16Ptr>(get_class());
        }
    } // namespace Int16Ptr
} // namespace app::classes::types
