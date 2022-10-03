#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectProfilerViewer {
        namespace {
            app::ObjectProfilerViewer__Class* type_info_ref = nullptr;
        }
        app::ObjectProfilerViewer__Class** type_info = &type_info_ref;
        inline app::ObjectProfilerViewer__Class* get_class() {
            return il2cpp::get_class<app::ObjectProfilerViewer__Class>(type_info, "", "ObjectProfilerViewer");
        }
        inline app::ObjectProfilerViewer* create() {
            return il2cpp::create_object<app::ObjectProfilerViewer>(get_class());
        }
    } // namespace ObjectProfilerViewer
} // namespace app::classes::types
