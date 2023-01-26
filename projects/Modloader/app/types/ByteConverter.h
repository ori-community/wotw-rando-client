#pragma once
#include <Modloader/app/structs/ByteConverter.h>
#include <Modloader/app/structs/ByteConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ByteConverter {
        inline app::ByteConverter__Class** type_info() {
            static app::ByteConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ByteConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ByteConverter__Class* get_class() {
            return il2cpp::get_class<app::ByteConverter__Class>(type_info(), "System.ComponentModel", "ByteConverter");
        }
        inline app::ByteConverter* create() {
            return il2cpp::create_object<app::ByteConverter>(get_class());
        }
    } // namespace ByteConverter
} // namespace app::classes::types
