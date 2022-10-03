#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExplainUnzip {
        namespace {
            app::ExplainUnzip__Class* type_info_ref = nullptr;
        }
        app::ExplainUnzip__Class** type_info = &type_info_ref;
        inline app::ExplainUnzip__Class* get_class() {
            return il2cpp::get_class<app::ExplainUnzip__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExplainUnzip");
        }
        inline app::ExplainUnzip* create() {
            return il2cpp::create_object<app::ExplainUnzip>(get_class());
        }
    } // namespace ExplainUnzip
} // namespace app::classes::types
