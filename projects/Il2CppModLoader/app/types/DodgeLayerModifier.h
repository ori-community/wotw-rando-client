#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DodgeLayerModifier {
        namespace {
            inline app::DodgeLayerModifier__Class* type_info_ref = nullptr;
        }
        inline app::DodgeLayerModifier__Class** type_info = &type_info_ref;
        inline app::DodgeLayerModifier__Class* get_class() {
            return il2cpp::get_class<app::DodgeLayerModifier__Class>(type_info, "", "DodgeLayerModifier");
        }
        inline app::DodgeLayerModifier* create() {
            return il2cpp::create_object<app::DodgeLayerModifier>(get_class());
        }
    } // namespace DodgeLayerModifier
} // namespace app::classes::types
