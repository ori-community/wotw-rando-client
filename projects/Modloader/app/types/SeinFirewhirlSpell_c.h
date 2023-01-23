#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinFirewhirlSpell_c__Class.h>
#include <Modloader/app/structs/SeinFirewhirlSpell_c.h>

namespace app::classes::types {
    namespace SeinFirewhirlSpell_c {
        inline app::SeinFirewhirlSpell_c__Class** type_info = (app::SeinFirewhirlSpell_c__Class**)(modloader::win::memory::resolve_rva(0x0474EA40));
        inline app::SeinFirewhirlSpell_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinFirewhirlSpell_c__Class>(type_info, "", "SeinFirewhirlSpell", "<>c");
        }
        inline app::SeinFirewhirlSpell_c* create() {
            return il2cpp::create_object<app::SeinFirewhirlSpell_c>(get_class());
        }
    } // namespace SeinFirewhirlSpell_c
} // namespace app::classes::types
