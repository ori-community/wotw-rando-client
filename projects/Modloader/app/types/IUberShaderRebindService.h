#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUberShaderRebindService {
        namespace {
            inline app::IUberShaderRebindService__Class* type_info_ref = nullptr;
        }
        inline app::IUberShaderRebindService__Class** type_info = &type_info_ref;
        inline app::IUberShaderRebindService__Class* get_class() {
            return il2cpp::get_class<app::IUberShaderRebindService__Class>(type_info, "", "IUberShaderRebindService");
        }
    } // namespace IUberShaderRebindService
} // namespace app::classes::types
