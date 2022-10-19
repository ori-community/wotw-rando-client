#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnderWaterLineModifier {
        namespace {
            inline app::UnderWaterLineModifier__Class* type_info_ref = nullptr;
        }
        inline app::UnderWaterLineModifier__Class** type_info = &type_info_ref;
        inline app::UnderWaterLineModifier__Class* get_class() {
            return il2cpp::get_class<app::UnderWaterLineModifier__Class>(type_info, "", "UnderWaterLineModifier");
        }
        inline app::UnderWaterLineModifier* create() {
            return il2cpp::create_object<app::UnderWaterLineModifier>(get_class());
        }
    } // namespace UnderWaterLineModifier
} // namespace app::classes::types
