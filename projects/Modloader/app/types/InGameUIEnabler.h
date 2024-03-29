#pragma once
#include <Modloader/app/structs/InGameUIEnabler.h>
#include <Modloader/app/structs/InGameUIEnabler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InGameUIEnabler {
        inline app::InGameUIEnabler__Class** type_info() {
            static app::InGameUIEnabler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InGameUIEnabler__Class**)(modloader::win::memory::resolve_rva(0x0474E768));
            }
            return cache;
        }
        inline app::InGameUIEnabler__Class* get_class() {
            return il2cpp::get_class<app::InGameUIEnabler__Class>(type_info(), "", "InGameUIEnabler");
        }
        inline app::InGameUIEnabler* create() {
            return il2cpp::create_object<app::InGameUIEnabler>(get_class());
        }
    } // namespace InGameUIEnabler
} // namespace app::classes::types
