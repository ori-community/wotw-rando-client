#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExplainUnzip_c__Class.h>
#include <Modloader/app/structs/ExplainUnzip_c.h>

namespace app::classes::types {
    namespace ExplainUnzip_c {
        inline app::ExplainUnzip_c__Class** type_info = (app::ExplainUnzip_c__Class**)(modloader::win::memory::resolve_rva(0x0476B580));
        inline app::ExplainUnzip_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ExplainUnzip_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExplainUnzip", "<>c");
        }
        inline app::ExplainUnzip_c* create() {
            return il2cpp::create_object<app::ExplainUnzip_c>(get_class());
        }
    } // namespace ExplainUnzip_c
} // namespace app::classes::types
