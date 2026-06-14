#pragma once
#include <Modloader/app/structs/BytePtr.h>
#include <Modloader/app/structs/BytePtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BytePtr {
        inline app::BytePtr__Class** type_info() {
            static app::BytePtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BytePtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BytePtr__Class* get_class() {
            return il2cpp::get_class<app::BytePtr__Class>(type_info(), "System", "Byte*");
        }
        inline app::BytePtr* create() {
            return il2cpp::create_object<app::BytePtr>(get_class());
        }
    } // namespace BytePtr
} // namespace app::classes::types
