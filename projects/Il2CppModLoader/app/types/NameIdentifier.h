#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameIdentifier {
        namespace {
            inline app::NameIdentifier__Class* type_info_ref = nullptr;
        }
        inline app::NameIdentifier__Class** type_info = &type_info_ref;
        inline app::NameIdentifier__Class* get_class() {
            return il2cpp::get_class<app::NameIdentifier__Class>(type_info, "PlayFab.PlayStreamModels", "NameIdentifier");
        }
        inline app::NameIdentifier* create() {
            return il2cpp::create_object<app::NameIdentifier>(get_class());
        }
    } // namespace NameIdentifier
} // namespace app::classes::types
