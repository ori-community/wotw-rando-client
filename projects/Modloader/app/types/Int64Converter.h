#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int64Converter {
        namespace {
            inline app::Int64Converter__Class* type_info_ref = nullptr;
        }
        inline app::Int64Converter__Class** type_info = &type_info_ref;
        inline app::Int64Converter__Class* get_class() {
            return il2cpp::get_class<app::Int64Converter__Class>(type_info, "System.ComponentModel", "Int64Converter");
        }
        inline app::Int64Converter* create() {
            return il2cpp::create_object<app::Int64Converter>(get_class());
        }
    } // namespace Int64Converter
} // namespace app::classes::types
