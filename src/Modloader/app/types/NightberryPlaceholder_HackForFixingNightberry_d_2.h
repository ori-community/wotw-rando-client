#pragma once
#include <Modloader/app/structs/NightberryPlaceholder_HackForFixingNightberry_d_2.h>
#include <Modloader/app/structs/NightberryPlaceholder_HackForFixingNightberry_d_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightberryPlaceholder_HackForFixingNightberry_d_2 {
        inline app::NightberryPlaceholder_HackForFixingNightberry_d_2__Class** type_info() {
            static app::NightberryPlaceholder_HackForFixingNightberry_d_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightberryPlaceholder_HackForFixingNightberry_d_2__Class**)(modloader::win::memory::resolve_rva(0x04788DF8));
            }
            return cache;
        }
        inline app::NightberryPlaceholder_HackForFixingNightberry_d_2__Class* get_class() {
            return il2cpp::get_nested_class<app::NightberryPlaceholder_HackForFixingNightberry_d_2__Class>(type_info(), "", "NightberryPlaceholder", "<HackForFixingNightberry>d__2");
        }
        inline app::NightberryPlaceholder_HackForFixingNightberry_d_2* create() {
            return il2cpp::create_object<app::NightberryPlaceholder_HackForFixingNightberry_d_2>(get_class());
        }
    } // namespace NightberryPlaceholder_HackForFixingNightberry_d_2
} // namespace app::classes::types
