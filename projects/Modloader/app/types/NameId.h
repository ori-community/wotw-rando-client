#pragma once
#include <Modloader/app/structs/NameId.h>
#include <Modloader/app/structs/NameId__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameId {
        inline app::NameId__Class** type_info() {
            static app::NameId__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameId__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameId__Class* get_class() {
            return il2cpp::get_class<app::NameId__Class>(type_info(), "PlayFab.PlayStreamModels", "NameId");
        }
        inline app::NameId* create() {
            return il2cpp::create_object<app::NameId>(get_class());
        }
    } // namespace NameId
} // namespace app::classes::types
