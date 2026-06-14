#pragma once
#include <Modloader/app/structs/AkUtilities.h>
#include <Modloader/app/structs/AkUtilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkUtilities {
        inline app::AkUtilities__Class** type_info() {
            static app::AkUtilities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkUtilities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkUtilities__Class* get_class() {
            return il2cpp::get_class<app::AkUtilities__Class>(type_info(), "", "AkUtilities");
        }
        inline app::AkUtilities* create() {
            return il2cpp::create_object<app::AkUtilities>(get_class());
        }
    } // namespace AkUtilities
} // namespace app::classes::types
