#pragma once
#include <Modloader/app/structs/FoxHeadHurtZone_c.h>
#include <Modloader/app/structs/FoxHeadHurtZone_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxHeadHurtZone_c {
        inline app::FoxHeadHurtZone_c__Class** type_info() {
            static app::FoxHeadHurtZone_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FoxHeadHurtZone_c__Class**)(modloader::win::memory::resolve_rva(0x0477BE30));
            }
            return cache;
        }
        inline app::FoxHeadHurtZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxHeadHurtZone_c__Class>(type_info(), "", "FoxHeadHurtZone", "<>c");
        }
        inline app::FoxHeadHurtZone_c* create() {
            return il2cpp::create_object<app::FoxHeadHurtZone_c>(get_class());
        }
    } // namespace FoxHeadHurtZone_c
} // namespace app::classes::types
