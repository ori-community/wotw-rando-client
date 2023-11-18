#pragma once
#include <Modloader/app/structs/ITypeResolutionService.h>
#include <Modloader/app/structs/ITypeResolutionService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITypeResolutionService {
        inline app::ITypeResolutionService__Class** type_info() {
            static app::ITypeResolutionService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITypeResolutionService__Class**)(modloader::win::memory::resolve_rva(0x04789CC8));
            }
            return cache;
        }
        inline app::ITypeResolutionService__Class* get_class() {
            return il2cpp::get_class<app::ITypeResolutionService__Class>(type_info(), "System.ComponentModel.Design", "ITypeResolutionService");
        }
    } // namespace ITypeResolutionService
} // namespace app::classes::types
