#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuestsUI_c__Class.h>
#include <Modloader/app/structs/QuestsUI_c.h>

namespace app::classes::types {
    namespace QuestsUI_c {
        inline app::QuestsUI_c__Class** type_info = (app::QuestsUI_c__Class**)(modloader::win::memory::resolve_rva(0x0475A618));
        inline app::QuestsUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestsUI_c__Class>(type_info, "", "QuestsUI", "<>c");
        }
        inline app::QuestsUI_c* create() {
            return il2cpp::create_object<app::QuestsUI_c>(get_class());
        }
    } // namespace QuestsUI_c
} // namespace app::classes::types
