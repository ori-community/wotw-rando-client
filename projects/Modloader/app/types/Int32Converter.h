#pragma once
#include <Modloader/app/structs/Int32Converter.h>
#include <Modloader/app/structs/Int32Converter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int32Converter {
        inline app::Int32Converter__Class** type_info() {
            static app::Int32Converter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Int32Converter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Int32Converter__Class* get_class() {
            return il2cpp::get_class<app::Int32Converter__Class>(type_info(), "System.ComponentModel", "Int32Converter");
        }
        inline app::Int32Converter* create() {
            return il2cpp::create_object<app::Int32Converter>(get_class());
        }
    } // namespace Int32Converter
} // namespace app::classes::types
