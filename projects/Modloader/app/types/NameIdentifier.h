#pragma once
#include <Modloader/app/structs/NameIdentifier.h>
#include <Modloader/app/structs/NameIdentifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameIdentifier {
        inline app::NameIdentifier__Class** type_info() {
            static app::NameIdentifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameIdentifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameIdentifier__Class* get_class() {
            return il2cpp::get_class<app::NameIdentifier__Class>(type_info(), "PlayFab.PlayStreamModels", "NameIdentifier");
        }
        inline app::NameIdentifier* create() {
            return il2cpp::create_object<app::NameIdentifier>(get_class());
        }
    } // namespace NameIdentifier
} // namespace app::classes::types
