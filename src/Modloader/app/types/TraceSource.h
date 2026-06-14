#pragma once
#include <Modloader/app/structs/TraceSource.h>
#include <Modloader/app/structs/TraceSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceSource {
        inline app::TraceSource__Class** type_info() {
            static app::TraceSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TraceSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TraceSource__Class* get_class() {
            return il2cpp::get_class<app::TraceSource__Class>(type_info(), "System.Net", "TraceSource");
        }
        inline app::TraceSource* create() {
            return il2cpp::create_object<app::TraceSource>(get_class());
        }
    } // namespace TraceSource
} // namespace app::classes::types
