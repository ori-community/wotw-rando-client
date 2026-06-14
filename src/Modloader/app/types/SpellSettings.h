#pragma once
#include <Modloader/app/structs/SpellSettings.h>
#include <Modloader/app/structs/SpellSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpellSettings {
        inline app::SpellSettings__Class** type_info() {
            static app::SpellSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpellSettings__Class**)(modloader::win::memory::resolve_rva(0x04772F08));
            }
            return cache;
        }
        inline app::SpellSettings__Class* get_class() {
            return il2cpp::get_class<app::SpellSettings__Class>(type_info(), "", "SpellSettings");
        }
        inline app::SpellSettings* create() {
            return il2cpp::create_object<app::SpellSettings>(get_class());
        }
    } // namespace SpellSettings
} // namespace app::classes::types
