#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int32Converter {
        namespace {
            inline app::Int32Converter__Class* type_info_ref = nullptr;
        }
        inline app::Int32Converter__Class** type_info = &type_info_ref;
        inline app::Int32Converter__Class* get_class() {
            return il2cpp::get_class<app::Int32Converter__Class>(type_info, "System.ComponentModel", "Int32Converter");
        }
        inline app::Int32Converter* create() {
            return il2cpp::create_object<app::Int32Converter>(get_class());
        }
    } // namespace Int32Converter
} // namespace app::classes::types
