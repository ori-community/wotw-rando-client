#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VoidUberShaderRebindService__Class.h>
#include <Modloader/app/structs/VoidUberShaderRebindService.h>

namespace app::classes::types {
    namespace VoidUberShaderRebindService {
        inline app::VoidUberShaderRebindService__Class** type_info = (app::VoidUberShaderRebindService__Class**)(modloader::win::memory::resolve_rva(0x0478DD78));
        inline app::VoidUberShaderRebindService__Class* get_class() {
            return il2cpp::get_class<app::VoidUberShaderRebindService__Class>(type_info, "", "VoidUberShaderRebindService");
        }
        inline app::VoidUberShaderRebindService* create() {
            return il2cpp::create_object<app::VoidUberShaderRebindService>(get_class());
        }
    } // namespace VoidUberShaderRebindService
} // namespace app::classes::types
