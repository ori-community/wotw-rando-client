#pragma once
#include <Modloader/app/structs/AkSourceSettingsArray.h>
#include <Modloader/app/structs/AkSourceSettingsArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSourceSettingsArray {
        inline app::AkSourceSettingsArray__Class** type_info() {
            static app::AkSourceSettingsArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkSourceSettingsArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkSourceSettingsArray__Class* get_class() {
            return il2cpp::get_class<app::AkSourceSettingsArray__Class>(type_info(), "", "AkSourceSettingsArray");
        }
        inline app::AkSourceSettingsArray* create() {
            return il2cpp::create_object<app::AkSourceSettingsArray>(get_class());
        }
    } // namespace AkSourceSettingsArray
} // namespace app::classes::types
