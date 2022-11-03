#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Beautify {
        inline app::Beautify__Class** type_info = (app::Beautify__Class**)(modloader::win::memory::resolve_rva(0x0472E180));
        inline app::Beautify__Class* get_class() {
            return il2cpp::get_class<app::Beautify__Class>(type_info, "BeautifyEffect", "Beautify");
        }
        inline app::Beautify* create() {
            return il2cpp::create_object<app::Beautify>(get_class());
        }
    } // namespace Beautify
} // namespace app::classes::types
