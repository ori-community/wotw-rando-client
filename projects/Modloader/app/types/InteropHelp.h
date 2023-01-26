#pragma once
#include <Modloader/app/structs/InteropHelp.h>
#include <Modloader/app/structs/InteropHelp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteropHelp {
        inline app::InteropHelp__Class** type_info() {
            static app::InteropHelp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteropHelp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteropHelp__Class* get_class() {
            return il2cpp::get_class<app::InteropHelp__Class>(type_info(), "Steamworks", "InteropHelp");
        }
        inline app::InteropHelp* create() {
            return il2cpp::create_object<app::InteropHelp>(get_class());
        }
    } // namespace InteropHelp
} // namespace app::classes::types
