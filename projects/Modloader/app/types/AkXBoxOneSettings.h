#pragma once
#include <Modloader/app/structs/AkXBoxOneSettings.h>
#include <Modloader/app/structs/AkXBoxOneSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkXBoxOneSettings {
        inline app::AkXBoxOneSettings__Class** type_info() {
            static app::AkXBoxOneSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkXBoxOneSettings__Class**)(modloader::win::memory::resolve_rva(0x047041E8));
            }
            return cache;
        }
        inline app::AkXBoxOneSettings__Class* get_class() {
            return il2cpp::get_class<app::AkXBoxOneSettings__Class>(type_info(), "", "AkXBoxOneSettings");
        }
        inline app::AkXBoxOneSettings* create() {
            return il2cpp::create_object<app::AkXBoxOneSettings>(get_class());
        }
    } // namespace AkXBoxOneSettings
} // namespace app::classes::types
