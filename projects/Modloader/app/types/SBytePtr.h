#pragma once
#include <Modloader/app/structs/SBytePtr.h>
#include <Modloader/app/structs/SBytePtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SBytePtr {
        inline app::SBytePtr__Class** type_info() {
            static app::SBytePtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SBytePtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SBytePtr__Class* get_class() {
            return il2cpp::get_class<app::SBytePtr__Class>(type_info(), "System", "SByte*");
        }
        inline app::SBytePtr* create() {
            return il2cpp::create_object<app::SBytePtr>(get_class());
        }
    } // namespace SBytePtr
} // namespace app::classes::types
