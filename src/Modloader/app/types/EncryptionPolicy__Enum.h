#pragma once
#include <Modloader/app/structs/EncryptionPolicy__Enum.h>
#include <Modloader/app/structs/EncryptionPolicy__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncryptionPolicy__Enum {
        inline app::EncryptionPolicy__Enum__Class** type_info() {
            static app::EncryptionPolicy__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EncryptionPolicy__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EncryptionPolicy__Enum__Class* get_class() {
            return il2cpp::get_class<app::EncryptionPolicy__Enum__Class>(type_info(), "System.Net.Security", "EncryptionPolicy");
        }
        inline app::EncryptionPolicy__Enum* create() {
            return il2cpp::create_object<app::EncryptionPolicy__Enum>(get_class());
        }
    } // namespace EncryptionPolicy__Enum
} // namespace app::classes::types
