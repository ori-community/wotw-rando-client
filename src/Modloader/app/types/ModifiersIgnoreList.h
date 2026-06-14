#pragma once
#include <Modloader/app/structs/ModifiersIgnoreList.h>
#include <Modloader/app/structs/ModifiersIgnoreList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModifiersIgnoreList {
        inline app::ModifiersIgnoreList__Class** type_info() {
            static app::ModifiersIgnoreList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ModifiersIgnoreList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ModifiersIgnoreList__Class* get_class() {
            return il2cpp::get_class<app::ModifiersIgnoreList__Class>(type_info(), "Moon.ArtOptimization", "ModifiersIgnoreList");
        }
        inline app::ModifiersIgnoreList* create() {
            return il2cpp::create_object<app::ModifiersIgnoreList>(get_class());
        }
    } // namespace ModifiersIgnoreList
} // namespace app::classes::types
