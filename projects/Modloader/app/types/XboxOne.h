#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOne {
        inline app::XboxOne__Class** type_info = (app::XboxOne__Class**)(modloader::win::memory::resolve_rva(0x04707B88));
        inline app::XboxOne__Class* get_class() {
            return il2cpp::get_class<app::XboxOne__Class>(type_info, "", "XboxOne");
        }
        inline app::XboxOne* create() {
            return il2cpp::create_object<app::XboxOne>(get_class());
        }
    } // namespace XboxOne
} // namespace app::classes::types
