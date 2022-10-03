#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GCFinalizerTablePrewarm_ObjWithFinalizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GCFinalizerTablePrewarm_ObjWithFinalizer__Class** type_info;
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Class* get_class() {
            return il2cpp::get_nested_class<app::GCFinalizerTablePrewarm_ObjWithFinalizer__Class>(type_info, "frameworks.loading.Prewarmers", "GCFinalizerTablePrewarm", "ObjWithFinalizer");
        }
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer* create() {
            return il2cpp::create_object<app::GCFinalizerTablePrewarm_ObjWithFinalizer>(get_class());
        }
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array* create_array(int size) {
            return il2cpp::array_new<app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array>(get_class(), size);
        }
    } // namespace GCFinalizerTablePrewarm_ObjWithFinalizer
} // namespace app::classes::types
