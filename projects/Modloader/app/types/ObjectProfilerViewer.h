#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ObjectProfilerViewer__Class.h>
#include <Modloader/app/structs/ObjectProfilerViewer.h>

namespace app::classes::types {
    namespace ObjectProfilerViewer {
        namespace {
            inline app::ObjectProfilerViewer__Class* type_info_ref = nullptr;
        }
        inline app::ObjectProfilerViewer__Class** type_info = &type_info_ref;
        inline app::ObjectProfilerViewer__Class* get_class() {
            return il2cpp::get_class<app::ObjectProfilerViewer__Class>(type_info, "", "ObjectProfilerViewer");
        }
        inline app::ObjectProfilerViewer* create() {
            return il2cpp::create_object<app::ObjectProfilerViewer>(get_class());
        }
    } // namespace ObjectProfilerViewer
} // namespace app::classes::types
