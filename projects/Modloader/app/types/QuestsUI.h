#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestsUI {
        inline app::QuestsUI__Class** type_info = (app::QuestsUI__Class**)(modloader::win::memory::resolve_rva(0x04728988));
        inline app::QuestsUI__Class* get_class() {
            return il2cpp::get_class<app::QuestsUI__Class>(type_info, "", "QuestsUI");
        }
        inline app::QuestsUI* create() {
            return il2cpp::create_object<app::QuestsUI>(get_class());
        }
    } // namespace QuestsUI
} // namespace app::classes::types
