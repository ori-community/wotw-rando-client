#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt64Converter {
        namespace {
            inline app::UInt64Converter__Class* type_info_ref = nullptr;
        }
        inline app::UInt64Converter__Class** type_info = &type_info_ref;
        inline app::UInt64Converter__Class* get_class() {
            return il2cpp::get_class<app::UInt64Converter__Class>(type_info, "System.ComponentModel", "UInt64Converter");
        }
        inline app::UInt64Converter* create() {
            return il2cpp::create_object<app::UInt64Converter>(get_class());
        }
    } // namespace UInt64Converter
} // namespace app::classes::types
