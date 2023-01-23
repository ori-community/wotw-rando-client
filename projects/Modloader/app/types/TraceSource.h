#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TraceSource__Class.h>
#include <Modloader/app/structs/TraceSource.h>

namespace app::classes::types {
    namespace TraceSource {
        namespace {
            inline app::TraceSource__Class* type_info_ref = nullptr;
        }
        inline app::TraceSource__Class** type_info = &type_info_ref;
        inline app::TraceSource__Class* get_class() {
            return il2cpp::get_class<app::TraceSource__Class>(type_info, "System.Net", "TraceSource");
        }
        inline app::TraceSource* create() {
            return il2cpp::create_object<app::TraceSource>(get_class());
        }
    } // namespace TraceSource
} // namespace app::classes::types
