#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ByteConverter {
        namespace {
            inline app::ByteConverter__Class* type_info_ref = nullptr;
        }
        inline app::ByteConverter__Class** type_info = &type_info_ref;
        inline app::ByteConverter__Class* get_class() {
            return il2cpp::get_class<app::ByteConverter__Class>(type_info, "System.ComponentModel", "ByteConverter");
        }
        inline app::ByteConverter* create() {
            return il2cpp::create_object<app::ByteConverter>(get_class());
        }
    } // namespace ByteConverter
} // namespace app::classes::types
