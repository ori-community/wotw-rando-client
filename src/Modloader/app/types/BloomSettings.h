#pragma once
#include <Modloader/app/structs/BloomSettings.h>
#include <Modloader/app/structs/BloomSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BloomSettings {
        inline app::BloomSettings__Class** type_info() {
            static app::BloomSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BloomSettings__Class**)(modloader::win::memory::resolve_rva(0x04724DC0));
            }
            return cache;
        }
        inline app::BloomSettings__Class* get_class() {
            return il2cpp::get_class<app::BloomSettings__Class>(type_info(), "", "BloomSettings");
        }
        inline app::BloomSettings* create() {
            return il2cpp::create_object<app::BloomSettings>(get_class());
        }
    } // namespace BloomSettings
} // namespace app::classes::types
