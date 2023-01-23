#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContainerFilterService__Class.h>
#include <Modloader/app/structs/ContainerFilterService.h>

namespace app::classes::types {
    namespace ContainerFilterService {
        inline app::ContainerFilterService__Class** type_info = (app::ContainerFilterService__Class**)(modloader::win::memory::resolve_rva(0x04714D90));
        inline app::ContainerFilterService__Class* get_class() {
            return il2cpp::get_class<app::ContainerFilterService__Class>(type_info, "System.ComponentModel", "ContainerFilterService");
        }
        inline app::ContainerFilterService* create() {
            return il2cpp::create_object<app::ContainerFilterService>(get_class());
        }
    } // namespace ContainerFilterService
} // namespace app::classes::types
