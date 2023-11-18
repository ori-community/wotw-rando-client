#pragma once
#include <Modloader/app/structs/GCFinalizerTablePrewarm.h>
#include <Modloader/app/structs/GCFinalizerTablePrewarm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GCFinalizerTablePrewarm {
        inline app::GCFinalizerTablePrewarm__Class** type_info() {
            static app::GCFinalizerTablePrewarm__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GCFinalizerTablePrewarm__Class**)(modloader::win::memory::resolve_rva(0x047681C0));
            }
            return cache;
        }
        inline app::GCFinalizerTablePrewarm__Class* get_class() {
            return il2cpp::get_class<app::GCFinalizerTablePrewarm__Class>(type_info(), "frameworks.loading.Prewarmers", "GCFinalizerTablePrewarm");
        }
        inline app::GCFinalizerTablePrewarm* create() {
            return il2cpp::create_object<app::GCFinalizerTablePrewarm>(get_class());
        }
    } // namespace GCFinalizerTablePrewarm
} // namespace app::classes::types
