#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SourceType__Enum_1 {
        namespace {
            app::SourceType__Enum_1__Class* type_info_ref = nullptr;
        }
        app::SourceType__Enum_1__Class** type_info = &type_info_ref;
        inline app::SourceType__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::SourceType__Enum_1__Class>(type_info, "PlayFab.PlayStreamModels", "SourceType");
        }
        inline app::SourceType__Enum_1* create() {
            return il2cpp::create_object<app::SourceType__Enum_1>(get_class());
        }
    } // namespace SourceType__Enum_1
} // namespace app::classes::types
