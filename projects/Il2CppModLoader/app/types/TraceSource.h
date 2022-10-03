#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TraceSource {
        namespace {
            app::TraceSource__Class* type_info_ref = nullptr;
        }
        app::TraceSource__Class** type_info = &type_info_ref;
        inline app::TraceSource__Class* get_class() {
            return il2cpp::get_class<app::TraceSource__Class>(type_info, "System.Net", "TraceSource");
        }
        inline app::TraceSource* create() {
            return il2cpp::create_object<app::TraceSource>(get_class());
        }
    } // namespace TraceSource
} // namespace app::classes::types
