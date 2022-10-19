#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AlphaMaskModifier {
        namespace {
            inline app::AlphaMaskModifier__Class* type_info_ref = nullptr;
        }
        inline app::AlphaMaskModifier__Class** type_info = &type_info_ref;
        inline app::AlphaMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::AlphaMaskModifier__Class>(type_info, "", "AlphaMaskModifier");
        }
        inline app::AlphaMaskModifier* create() {
            return il2cpp::create_object<app::AlphaMaskModifier>(get_class());
        }
    } // namespace AlphaMaskModifier
} // namespace app::classes::types
