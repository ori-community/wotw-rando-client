#pragma once
#include <Modloader/app/structs/UInt32Ptr.h>
#include <Modloader/app/structs/UInt32Ptr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt32Ptr {
        inline app::UInt32Ptr__Class** type_info() {
            static app::UInt32Ptr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UInt32Ptr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UInt32Ptr__Class* get_class() {
            return il2cpp::get_class<app::UInt32Ptr__Class>(type_info(), "System", "UInt32*");
        }
        inline app::UInt32Ptr* create() {
            return il2cpp::create_object<app::UInt32Ptr>(get_class());
        }
    } // namespace UInt32Ptr
} // namespace app::classes::types
