#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CountryCode__Enum_2 {
        namespace {
            inline app::CountryCode__Enum_2__Class* type_info_ref = nullptr;
        }
        inline app::CountryCode__Enum_2__Class** type_info = &type_info_ref;
        inline app::CountryCode__Enum_2__Class* get_class() {
            return il2cpp::get_class<app::CountryCode__Enum_2__Class>(type_info, "PlayFab.PlayStreamModels", "CountryCode");
        }
        inline app::CountryCode__Enum_2* create() {
            return il2cpp::create_object<app::CountryCode__Enum_2>(get_class());
        }
    } // namespace CountryCode__Enum_2
} // namespace app::classes::types
