#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IProfilingSetting__Class.h>
#include <Modloader/app/structs/IProfilingSetting.h>
#include <Modloader/app/structs/IProfilingSetting__Array.h>

namespace app::classes::types {
    namespace IProfilingSetting {
        inline app::IProfilingSetting__Class** type_info = (app::IProfilingSetting__Class**)(modloader::win::memory::resolve_rva(0x0474C508));
        inline app::IProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::IProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "IProfilingSetting");
        }
        inline app::IProfilingSetting* create() {
            return il2cpp::create_object<app::IProfilingSetting>(get_class());
        }
        inline app::IProfilingSetting__Array* create_array(int size) {
            return il2cpp::array_new<app::IProfilingSetting__Array>(get_class(), size);
        }
        inline app::IProfilingSetting__Array* create_array(const std::vector<app::IProfilingSetting*>& items) {
            return il2cpp::array_new<app::IProfilingSetting__Array>(get_class(), items);
        }
    } // namespace IProfilingSetting
} // namespace app::classes::types
