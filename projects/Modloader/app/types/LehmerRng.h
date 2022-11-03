#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LehmerRng {
        inline app::LehmerRng__Class** type_info = (app::LehmerRng__Class**)(modloader::win::memory::resolve_rva(0x04734268));
        inline app::LehmerRng__Class* get_class() {
            return il2cpp::get_class<app::LehmerRng__Class>(type_info, "Moon", "LehmerRng");
        }
        inline app::LehmerRng* create() {
            return il2cpp::create_object<app::LehmerRng>(get_class());
        }
    } // namespace LehmerRng
} // namespace app::classes::types
