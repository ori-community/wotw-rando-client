#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MudkisserGrayboxEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MudkisserGrayboxEntity__Class** type_info;
        inline app::MudkisserGrayboxEntity__Class* get_class() {
            return il2cpp::get_class<app::MudkisserGrayboxEntity__Class>(type_info, "", "MudkisserGrayboxEntity");
        }
        inline app::MudkisserGrayboxEntity* create() {
            return il2cpp::create_object<app::MudkisserGrayboxEntity>(get_class());
        }
    } // namespace MudkisserGrayboxEntity
} // namespace app::classes::types
