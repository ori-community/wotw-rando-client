#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Fader_c {
        inline app::Fader_c__Class** type_info = (app::Fader_c__Class**)(modloader::win::memory::resolve_rva(0x0476FC70));
        inline app::Fader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Fader_c__Class>(type_info, "", "Fader", "<>c");
        }
        inline app::Fader_c* create() {
            return il2cpp::create_object<app::Fader_c>(get_class());
        }
    } // namespace Fader_c
} // namespace app::classes::types
