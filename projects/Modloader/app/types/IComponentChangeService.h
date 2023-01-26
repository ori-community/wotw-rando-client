#pragma once
#include <Modloader/app/structs/IComponentChangeService.h>
#include <Modloader/app/structs/IComponentChangeService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IComponentChangeService {
        inline app::IComponentChangeService__Class** type_info() {
            static app::IComponentChangeService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IComponentChangeService__Class**)(modloader::win::memory::resolve_rva(0x04794258));
            }
            return cache;
        }
        inline app::IComponentChangeService__Class* get_class() {
            return il2cpp::get_class<app::IComponentChangeService__Class>(type_info(), "System.ComponentModel.Design", "IComponentChangeService");
        }
    } // namespace IComponentChangeService
} // namespace app::classes::types
