#pragma once
#include <Modloader/app/structs/UInt16Converter.h>
#include <Modloader/app/structs/UInt16Converter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt16Converter {
        inline app::UInt16Converter__Class** type_info() {
            static app::UInt16Converter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UInt16Converter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UInt16Converter__Class* get_class() {
            return il2cpp::get_class<app::UInt16Converter__Class>(type_info(), "System.ComponentModel", "UInt16Converter");
        }
        inline app::UInt16Converter* create() {
            return il2cpp::create_object<app::UInt16Converter>(get_class());
        }
    } // namespace UInt16Converter
} // namespace app::classes::types
