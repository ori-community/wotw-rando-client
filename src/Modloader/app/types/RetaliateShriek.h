#pragma once
#include <Modloader/app/structs/RetaliateShriek.h>
#include <Modloader/app/structs/RetaliateShriek__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RetaliateShriek {
        inline app::RetaliateShriek__Class** type_info() {
            static app::RetaliateShriek__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RetaliateShriek__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RetaliateShriek__Class* get_class() {
            return il2cpp::get_class<app::RetaliateShriek__Class>(type_info(), "", "RetaliateShriek");
        }
        inline app::RetaliateShriek* create() {
            return il2cpp::create_object<app::RetaliateShriek>(get_class());
        }
    } // namespace RetaliateShriek
} // namespace app::classes::types
