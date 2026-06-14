#pragma once
#include <Modloader/app/structs/ContainerFilterService.h>
#include <Modloader/app/structs/ContainerFilterService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContainerFilterService {
        inline app::ContainerFilterService__Class** type_info() {
            static app::ContainerFilterService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContainerFilterService__Class**)(modloader::win::memory::resolve_rva(0x04714D90));
            }
            return cache;
        }
        inline app::ContainerFilterService__Class* get_class() {
            return il2cpp::get_class<app::ContainerFilterService__Class>(type_info(), "System.ComponentModel", "ContainerFilterService");
        }
        inline app::ContainerFilterService* create() {
            return il2cpp::create_object<app::ContainerFilterService>(get_class());
        }
    } // namespace ContainerFilterService
} // namespace app::classes::types
