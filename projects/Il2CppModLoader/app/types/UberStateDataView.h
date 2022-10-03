#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateDataView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateDataView__Class** type_info;
        inline app::UberStateDataView__Class* get_class() {
            return il2cpp::get_class<app::UberStateDataView__Class>(type_info, "Moon.UberStateVisualization", "UberStateDataView");
        }
        inline app::UberStateDataView* create() {
            return il2cpp::create_object<app::UberStateDataView>(get_class());
        }
    } // namespace UberStateDataView
} // namespace app::classes::types
