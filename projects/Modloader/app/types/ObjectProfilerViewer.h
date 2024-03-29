#pragma once
#include <Modloader/app/structs/ObjectProfilerViewer.h>
#include <Modloader/app/structs/ObjectProfilerViewer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectProfilerViewer {
        inline app::ObjectProfilerViewer__Class** type_info() {
            static app::ObjectProfilerViewer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ObjectProfilerViewer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ObjectProfilerViewer__Class* get_class() {
            return il2cpp::get_class<app::ObjectProfilerViewer__Class>(type_info(), "", "ObjectProfilerViewer");
        }
        inline app::ObjectProfilerViewer* create() {
            return il2cpp::create_object<app::ObjectProfilerViewer>(get_class());
        }
    } // namespace ObjectProfilerViewer
} // namespace app::classes::types
