#pragma once
#include <Modloader/app/structs/SaveInTheDarkZone.h>
#include <Modloader/app/structs/SaveInTheDarkZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveInTheDarkZone {
        inline app::SaveInTheDarkZone__Class** type_info() {
            static app::SaveInTheDarkZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveInTheDarkZone__Class**)(modloader::win::memory::resolve_rva(0x04719010));
            }
            return cache;
        }
        inline app::SaveInTheDarkZone__Class* get_class() {
            return il2cpp::get_class<app::SaveInTheDarkZone__Class>(type_info(), "", "SaveInTheDarkZone");
        }
        inline app::SaveInTheDarkZone* create() {
            return il2cpp::create_object<app::SaveInTheDarkZone>(get_class());
        }
    } // namespace SaveInTheDarkZone
} // namespace app::classes::types
