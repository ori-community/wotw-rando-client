#pragma once
#include <Modloader/app/structs/ExplainUnzip_c_DisplayClass0_0.h>
#include <Modloader/app/structs/ExplainUnzip_c_DisplayClass0_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExplainUnzip_c_DisplayClass0_0 {
        inline app::ExplainUnzip_c_DisplayClass0_0__Class** type_info() {
            static app::ExplainUnzip_c_DisplayClass0_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExplainUnzip_c_DisplayClass0_0__Class**)(modloader::win::memory::resolve_rva(0x0475C720));
            }
            return cache;
        }
        inline app::ExplainUnzip_c_DisplayClass0_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ExplainUnzip_c_DisplayClass0_0__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ExplainUnzip", "<>c__DisplayClass0_0");
        }
        inline app::ExplainUnzip_c_DisplayClass0_0* create() {
            return il2cpp::create_object<app::ExplainUnzip_c_DisplayClass0_0>(get_class());
        }
    } // namespace ExplainUnzip_c_DisplayClass0_0
} // namespace app::classes::types
