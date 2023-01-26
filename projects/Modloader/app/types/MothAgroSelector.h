#pragma once
#include <Modloader/app/structs/MothAgroSelector.h>
#include <Modloader/app/structs/MothAgroSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothAgroSelector {
        inline app::MothAgroSelector__Class** type_info() {
            static app::MothAgroSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MothAgroSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MothAgroSelector__Class* get_class() {
            return il2cpp::get_class<app::MothAgroSelector__Class>(type_info(), "", "MothAgroSelector");
        }
        inline app::MothAgroSelector* create() {
            return il2cpp::create_object<app::MothAgroSelector>(get_class());
        }
    } // namespace MothAgroSelector
} // namespace app::classes::types
