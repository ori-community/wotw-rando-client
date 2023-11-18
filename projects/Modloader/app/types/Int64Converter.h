#pragma once
#include <Modloader/app/structs/Int64Converter.h>
#include <Modloader/app/structs/Int64Converter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int64Converter {
        inline app::Int64Converter__Class** type_info() {
            static app::Int64Converter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Int64Converter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Int64Converter__Class* get_class() {
            return il2cpp::get_class<app::Int64Converter__Class>(type_info(), "System.ComponentModel", "Int64Converter");
        }
        inline app::Int64Converter* create() {
            return il2cpp::create_object<app::Int64Converter>(get_class());
        }
    } // namespace Int64Converter
} // namespace app::classes::types
