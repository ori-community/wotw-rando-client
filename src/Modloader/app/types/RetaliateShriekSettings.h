#pragma once
#include <Modloader/app/structs/RetaliateShriekSettings.h>
#include <Modloader/app/structs/RetaliateShriekSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RetaliateShriekSettings {
        inline app::RetaliateShriekSettings__Class** type_info() {
            static app::RetaliateShriekSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RetaliateShriekSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RetaliateShriekSettings__Class* get_class() {
            return il2cpp::get_class<app::RetaliateShriekSettings__Class>(type_info(), "", "RetaliateShriekSettings");
        }
        inline app::RetaliateShriekSettings* create() {
            return il2cpp::create_object<app::RetaliateShriekSettings>(get_class());
        }
    } // namespace RetaliateShriekSettings
} // namespace app::classes::types
