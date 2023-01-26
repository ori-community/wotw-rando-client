#pragma once
#include <Modloader/app/structs/ExplainUnzip.h>
#include <Modloader/app/structs/ExplainUnzip__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExplainUnzip {
        inline app::ExplainUnzip__Class** type_info() {
            static app::ExplainUnzip__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExplainUnzip__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExplainUnzip__Class* get_class() {
            return il2cpp::get_class<app::ExplainUnzip__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ExplainUnzip");
        }
        inline app::ExplainUnzip* create() {
            return il2cpp::create_object<app::ExplainUnzip>(get_class());
        }
    } // namespace ExplainUnzip
} // namespace app::classes::types
