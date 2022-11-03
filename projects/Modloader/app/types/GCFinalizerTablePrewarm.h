#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GCFinalizerTablePrewarm {
        inline app::GCFinalizerTablePrewarm__Class** type_info = (app::GCFinalizerTablePrewarm__Class**)(modloader::win::memory::resolve_rva(0x047681C0));
        inline app::GCFinalizerTablePrewarm__Class* get_class() {
            return il2cpp::get_class<app::GCFinalizerTablePrewarm__Class>(type_info, "frameworks.loading.Prewarmers", "GCFinalizerTablePrewarm");
        }
        inline app::GCFinalizerTablePrewarm* create() {
            return il2cpp::create_object<app::GCFinalizerTablePrewarm>(get_class());
        }
    } // namespace GCFinalizerTablePrewarm
} // namespace app::classes::types
