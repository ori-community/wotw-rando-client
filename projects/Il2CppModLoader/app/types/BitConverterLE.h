#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BitConverterLE {
        namespace {
            inline app::BitConverterLE__Class* type_info_ref = nullptr;
        }
        inline app::BitConverterLE__Class** type_info = &type_info_ref;
        inline app::BitConverterLE__Class* get_class() {
            return il2cpp::get_class<app::BitConverterLE__Class>(type_info, "Mono.Security", "BitConverterLE");
        }
        inline app::BitConverterLE* create() {
            return il2cpp::create_object<app::BitConverterLE>(get_class());
        }
    } // namespace BitConverterLE
} // namespace app::classes::types
