#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SingleConverter {
        namespace {
            inline app::SingleConverter__Class* type_info_ref = nullptr;
        }
        inline app::SingleConverter__Class** type_info = &type_info_ref;
        inline app::SingleConverter__Class* get_class() {
            return il2cpp::get_class<app::SingleConverter__Class>(type_info, "System.ComponentModel", "SingleConverter");
        }
        inline app::SingleConverter* create() {
            return il2cpp::create_object<app::SingleConverter>(get_class());
        }
    } // namespace SingleConverter
} // namespace app::classes::types
