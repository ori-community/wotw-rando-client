#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GCFinalizerTablePrewarm_ObjWithFinalizer {
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Class** type_info = (app::GCFinalizerTablePrewarm_ObjWithFinalizer__Class**)(modloader::win::memory::resolve_rva(0x04759568));
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Class* get_class() {
            return il2cpp::get_nested_class<app::GCFinalizerTablePrewarm_ObjWithFinalizer__Class>(type_info, "frameworks.loading.Prewarmers", "GCFinalizerTablePrewarm", "ObjWithFinalizer");
        }
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer* create() {
            return il2cpp::create_object<app::GCFinalizerTablePrewarm_ObjWithFinalizer>(get_class());
        }
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array* create_array(int size) {
            return il2cpp::array_new<app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array>(get_class(), size);
        }
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array* create_array(const std::vector<app::GCFinalizerTablePrewarm_ObjWithFinalizer*>& items) {
            return il2cpp::array_new<app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array>(get_class(), items);
        }
    } // namespace GCFinalizerTablePrewarm_ObjWithFinalizer
} // namespace app::classes::types
