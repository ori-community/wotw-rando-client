#pragma once
#include <Modloader/app/structs/UInt32Converter.h>
#include <Modloader/app/structs/UInt32Converter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt32Converter {
        inline app::UInt32Converter__Class** type_info() {
            static app::UInt32Converter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UInt32Converter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UInt32Converter__Class* get_class() {
            return il2cpp::get_class<app::UInt32Converter__Class>(type_info(), "System.ComponentModel", "UInt32Converter");
        }
        inline app::UInt32Converter* create() {
            return il2cpp::create_object<app::UInt32Converter>(get_class());
        }
    } // namespace UInt32Converter
} // namespace app::classes::types
