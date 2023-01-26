#pragma once
#include <Modloader/app/structs/UInt64Converter.h>
#include <Modloader/app/structs/UInt64Converter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt64Converter {
        inline app::UInt64Converter__Class** type_info() {
            static app::UInt64Converter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UInt64Converter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UInt64Converter__Class* get_class() {
            return il2cpp::get_class<app::UInt64Converter__Class>(type_info(), "System.ComponentModel", "UInt64Converter");
        }
        inline app::UInt64Converter* create() {
            return il2cpp::create_object<app::UInt64Converter>(get_class());
        }
    } // namespace UInt64Converter
} // namespace app::classes::types
