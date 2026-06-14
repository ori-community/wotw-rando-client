#pragma once
#include <Modloader/app/structs/QuestsUI.h>
#include <Modloader/app/structs/QuestsUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestsUI {
        inline app::QuestsUI__Class** type_info() {
            static app::QuestsUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuestsUI__Class**)(modloader::win::memory::resolve_rva(0x04728988));
            }
            return cache;
        }
        inline app::QuestsUI__Class* get_class() {
            return il2cpp::get_class<app::QuestsUI__Class>(type_info(), "", "QuestsUI");
        }
        inline app::QuestsUI* create() {
            return il2cpp::create_object<app::QuestsUI>(get_class());
        }
    } // namespace QuestsUI
} // namespace app::classes::types
