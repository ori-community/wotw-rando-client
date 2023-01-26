#pragma once
#include <Modloader/app/structs/FallLink.h>
#include <Modloader/app/structs/FallLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallLink {
        inline app::FallLink__Class** type_info() {
            static app::FallLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallLink__Class* get_class() {
            return il2cpp::get_class<app::FallLink__Class>(type_info(), "", "FallLink");
        }
        inline app::FallLink* create() {
            return il2cpp::create_object<app::FallLink>(get_class());
        }
    } // namespace FallLink
} // namespace app::classes::types
