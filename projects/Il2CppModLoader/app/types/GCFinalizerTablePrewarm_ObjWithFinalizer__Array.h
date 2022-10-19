#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GCFinalizerTablePrewarm_ObjWithFinalizer__Array {
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array__Class** type_info = (app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array__Class**)(modloader::win::memory::resolve_rva(0x04712958));
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array__Class* get_class() {
            return il2cpp::get_class<app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array__Class>(type_info, "frameworks.loading.Prewarmers", "GCFinalizerTablePrewarm+ObjWithFinalizer[]");
        }
        inline app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array* create() {
            return il2cpp::create_object<app::GCFinalizerTablePrewarm_ObjWithFinalizer__Array>(get_class());
        }
    } // namespace GCFinalizerTablePrewarm_ObjWithFinalizer__Array
} // namespace app::classes::types
