#pragma once
#include <Modloader/app/structs/SeinFirewhirlSpell_c.h>
#include <Modloader/app/structs/SeinFirewhirlSpell_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinFirewhirlSpell_c {
        inline app::SeinFirewhirlSpell_c__Class** type_info() {
            static app::SeinFirewhirlSpell_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinFirewhirlSpell_c__Class**)(modloader::win::memory::resolve_rva(0x0474EA40));
            }
            return cache;
        }
        inline app::SeinFirewhirlSpell_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinFirewhirlSpell_c__Class>(type_info(), "", "SeinFirewhirlSpell", "<>c");
        }
        inline app::SeinFirewhirlSpell_c* create() {
            return il2cpp::create_object<app::SeinFirewhirlSpell_c>(get_class());
        }
    } // namespace SeinFirewhirlSpell_c
} // namespace app::classes::types
