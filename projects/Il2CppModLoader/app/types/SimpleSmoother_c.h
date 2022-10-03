#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleSmoother_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleSmoother_c__Class** type_info;
        inline app::SimpleSmoother_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleSmoother_c__Class>(type_info, "TriangleNet.Smoothing", "SimpleSmoother", "<>c");
        }
        inline app::SimpleSmoother_c* create() {
            return il2cpp::create_object<app::SimpleSmoother_c>(get_class());
        }
    } // namespace SimpleSmoother_c
} // namespace app::classes::types
