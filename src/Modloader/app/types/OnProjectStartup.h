#pragma once
#include <Modloader/app/structs/OnProjectStartup.h>
#include <Modloader/app/structs/OnProjectStartup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnProjectStartup {
        inline app::OnProjectStartup__Class** type_info() {
            static app::OnProjectStartup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnProjectStartup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnProjectStartup__Class* get_class() {
            return il2cpp::get_class<app::OnProjectStartup__Class>(type_info(), "", "OnProjectStartup");
        }
        inline app::OnProjectStartup* create() {
            return il2cpp::create_object<app::OnProjectStartup>(get_class());
        }
    } // namespace OnProjectStartup
} // namespace app::classes::types
