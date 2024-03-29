#pragma once
#include <Modloader/app/structs/DropLootSettings.h>
#include <Modloader/app/structs/DropLootSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropLootSettings {
        inline app::DropLootSettings__Class** type_info() {
            static app::DropLootSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DropLootSettings__Class**)(modloader::win::memory::resolve_rva(0x0473A840));
            }
            return cache;
        }
        inline app::DropLootSettings__Class* get_class() {
            return il2cpp::get_class<app::DropLootSettings__Class>(type_info(), "", "DropLootSettings");
        }
        inline app::DropLootSettings* create() {
            return il2cpp::create_object<app::DropLootSettings>(get_class());
        }
    } // namespace DropLootSettings
} // namespace app::classes::types
