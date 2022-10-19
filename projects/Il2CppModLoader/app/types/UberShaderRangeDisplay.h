#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderRangeDisplay {
        namespace {
            inline app::UberShaderRangeDisplay__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderRangeDisplay__Class** type_info = &type_info_ref;
        inline app::UberShaderRangeDisplay__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRangeDisplay__Class>(type_info, "", "UberShaderRangeDisplay");
        }
        inline app::UberShaderRangeDisplay* create() {
            return il2cpp::create_object<app::UberShaderRangeDisplay>(get_class());
        }
    } // namespace UberShaderRangeDisplay
} // namespace app::classes::types
