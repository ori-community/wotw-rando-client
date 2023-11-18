#pragma once
#include <Modloader/app/structs/AkMemSettings.h>
#include <Modloader/app/structs/AkMemSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMemSettings {
        inline app::AkMemSettings__Class** type_info() {
            static app::AkMemSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMemSettings__Class**)(modloader::win::memory::resolve_rva(0x047614B8));
            }
            return cache;
        }
        inline app::AkMemSettings__Class* get_class() {
            return il2cpp::get_class<app::AkMemSettings__Class>(type_info(), "", "AkMemSettings");
        }
        inline app::AkMemSettings* create() {
            return il2cpp::create_object<app::AkMemSettings>(get_class());
        }
    } // namespace AkMemSettings
} // namespace app::classes::types
