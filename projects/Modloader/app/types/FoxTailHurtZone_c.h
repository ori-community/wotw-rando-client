#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FoxTailHurtZone_c {
        inline app::FoxTailHurtZone_c__Class** type_info = (app::FoxTailHurtZone_c__Class**)(modloader::win::memory::resolve_rva(0x04707DE8));
        inline app::FoxTailHurtZone_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxTailHurtZone_c__Class>(type_info, "", "FoxTailHurtZone", "<>c");
        }
        inline app::FoxTailHurtZone_c* create() {
            return il2cpp::create_object<app::FoxTailHurtZone_c>(get_class());
        }
    } // namespace FoxTailHurtZone_c
} // namespace app::classes::types
