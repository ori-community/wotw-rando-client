#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExplainUnzip__Class.h>
#include <Modloader/app/structs/ExplainUnzip.h>

namespace app::classes::types {
    namespace ExplainUnzip {
        namespace {
            inline app::ExplainUnzip__Class* type_info_ref = nullptr;
        }
        inline app::ExplainUnzip__Class** type_info = &type_info_ref;
        inline app::ExplainUnzip__Class* get_class() {
            return il2cpp::get_class<app::ExplainUnzip__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExplainUnzip");
        }
        inline app::ExplainUnzip* create() {
            return il2cpp::create_object<app::ExplainUnzip>(get_class());
        }
    } // namespace ExplainUnzip
} // namespace app::classes::types
