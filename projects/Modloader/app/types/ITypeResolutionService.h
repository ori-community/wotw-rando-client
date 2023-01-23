#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITypeResolutionService__Class.h>

namespace app::classes::types {
    namespace ITypeResolutionService {
        inline app::ITypeResolutionService__Class** type_info = (app::ITypeResolutionService__Class**)(modloader::win::memory::resolve_rva(0x04789CC8));
        inline app::ITypeResolutionService__Class* get_class() {
            return il2cpp::get_class<app::ITypeResolutionService__Class>(type_info, "System.ComponentModel.Design", "ITypeResolutionService");
        }
    } // namespace ITypeResolutionService
} // namespace app::classes::types
