#pragma once
#include <Modloader/app/structs/AsnDecodeStatus__Enum.h>
#include <Modloader/app/structs/AsnDecodeStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsnDecodeStatus__Enum {
        inline app::AsnDecodeStatus__Enum__Class** type_info() {
            static app::AsnDecodeStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsnDecodeStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsnDecodeStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::AsnDecodeStatus__Enum__Class>(type_info(), "System.Security.Cryptography", "AsnDecodeStatus");
        }
        inline app::AsnDecodeStatus__Enum* create() {
            return il2cpp::create_object<app::AsnDecodeStatus__Enum>(get_class());
        }
    } // namespace AsnDecodeStatus__Enum
} // namespace app::classes::types
