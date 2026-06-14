#pragma once
#include <Modloader/app/structs/ExternalKeyboard.h>
#include <Modloader/app/structs/ExternalKeyboard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExternalKeyboard {
        inline app::ExternalKeyboard__Class** type_info() {
            static app::ExternalKeyboard__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExternalKeyboard__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExternalKeyboard__Class* get_class() {
            return il2cpp::get_class<app::ExternalKeyboard__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard");
        }
        inline app::ExternalKeyboard* create() {
            return il2cpp::create_object<app::ExternalKeyboard>(get_class());
        }
    } // namespace ExternalKeyboard
} // namespace app::classes::types
