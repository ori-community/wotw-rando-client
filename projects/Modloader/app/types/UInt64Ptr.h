#pragma once
#include <Modloader/app/structs/UInt64Ptr.h>
#include <Modloader/app/structs/UInt64Ptr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt64Ptr {
        inline app::UInt64Ptr__Class** type_info() {
            static app::UInt64Ptr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UInt64Ptr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UInt64Ptr__Class* get_class() {
            return il2cpp::get_class<app::UInt64Ptr__Class>(type_info(), "System", "UInt64*");
        }
        inline app::UInt64Ptr* create() {
            return il2cpp::create_object<app::UInt64Ptr>(get_class());
        }
    } // namespace UInt64Ptr
} // namespace app::classes::types
