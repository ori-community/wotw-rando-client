#pragma once
#include <Modloader/app/structs/UInt16Ptr.h>
#include <Modloader/app/structs/UInt16Ptr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt16Ptr {
        inline app::UInt16Ptr__Class** type_info() {
            static app::UInt16Ptr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UInt16Ptr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UInt16Ptr__Class* get_class() {
            return il2cpp::get_class<app::UInt16Ptr__Class>(type_info(), "System", "UInt16*");
        }
        inline app::UInt16Ptr* create() {
            return il2cpp::create_object<app::UInt16Ptr>(get_class());
        }
    } // namespace UInt16Ptr
} // namespace app::classes::types
