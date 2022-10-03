#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GCFinalizerTablePrewarm {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GCFinalizerTablePrewarm__Class** type_info;
        inline app::GCFinalizerTablePrewarm__Class* get_class() {
            return il2cpp::get_class<app::GCFinalizerTablePrewarm__Class>(type_info, "frameworks.loading.Prewarmers", "GCFinalizerTablePrewarm");
        }
        inline app::GCFinalizerTablePrewarm* create() {
            return il2cpp::create_object<app::GCFinalizerTablePrewarm>(get_class());
        }
    } // namespace GCFinalizerTablePrewarm
} // namespace app::classes::types
