#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Statistic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Statistic__Class** type_info;
        inline app::Statistic__Class* get_class() {
            return il2cpp::get_class<app::Statistic__Class>(type_info, "TriangleNet.Tools", "Statistic");
        }
        inline app::Statistic* create() {
            return il2cpp::create_object<app::Statistic>(get_class());
        }
    } // namespace Statistic
} // namespace app::classes::types
