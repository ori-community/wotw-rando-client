#pragma once
#include <Modloader/app/structs/CCMoonTextColorer.h>
#include <Modloader/app/structs/CCMoonTextColorer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCMoonTextColorer {
        inline app::CCMoonTextColorer__Class** type_info() {
            static app::CCMoonTextColorer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCMoonTextColorer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCMoonTextColorer__Class* get_class() {
            return il2cpp::get_class<app::CCMoonTextColorer__Class>(type_info(), "", "CCMoonTextColorer");
        }
        inline app::CCMoonTextColorer* create() {
            return il2cpp::create_object<app::CCMoonTextColorer>(get_class());
        }
    } // namespace CCMoonTextColorer
} // namespace app::classes::types
