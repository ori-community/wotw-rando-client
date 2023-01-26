#pragma once
#include <Modloader/app/structs/SecChannelBindings.h>
#include <Modloader/app/structs/SecChannelBindings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecChannelBindings {
        inline app::SecChannelBindings__Class** type_info() {
            static app::SecChannelBindings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SecChannelBindings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SecChannelBindings__Class* get_class() {
            return il2cpp::get_class<app::SecChannelBindings__Class>(type_info(), "System.Net", "SecChannelBindings");
        }
        inline app::SecChannelBindings* create() {
            return il2cpp::create_object<app::SecChannelBindings>(get_class());
        }
    } // namespace SecChannelBindings
} // namespace app::classes::types
