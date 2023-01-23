#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Utility_DisableLater_d_8__Class.h>
#include <Modloader/app/structs/Utility_DisableLater_d_8.h>

namespace app::classes::types {
    namespace Utility_DisableLater_d_8 {
        inline app::Utility_DisableLater_d_8__Class** type_info = (app::Utility_DisableLater_d_8__Class**)(modloader::win::memory::resolve_rva(0x0470A9A0));
        inline app::Utility_DisableLater_d_8__Class* get_class() {
            return il2cpp::get_nested_class<app::Utility_DisableLater_d_8__Class>(type_info, "", "Utility", "<DisableLater>d__8");
        }
        inline app::Utility_DisableLater_d_8* create() {
            return il2cpp::create_object<app::Utility_DisableLater_d_8>(get_class());
        }
    } // namespace Utility_DisableLater_d_8
} // namespace app::classes::types
