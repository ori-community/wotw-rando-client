#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UInt16Converter {
        namespace {
            inline app::UInt16Converter__Class* type_info_ref = nullptr;
        }
        inline app::UInt16Converter__Class** type_info = &type_info_ref;
        inline app::UInt16Converter__Class* get_class() {
            return il2cpp::get_class<app::UInt16Converter__Class>(type_info, "System.ComponentModel", "UInt16Converter");
        }
        inline app::UInt16Converter* create() {
            return il2cpp::create_object<app::UInt16Converter>(get_class());
        }
    } // namespace UInt16Converter
} // namespace app::classes::types
