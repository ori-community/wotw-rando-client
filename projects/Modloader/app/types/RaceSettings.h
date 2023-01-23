#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceSettings__Class.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/RaceSettings__Array.h>

namespace app::classes::types {
    namespace RaceSettings {
        inline app::RaceSettings__Class** type_info = (app::RaceSettings__Class**)(modloader::win::memory::resolve_rva(0x04754B88));
        inline app::RaceSettings__Class* get_class() {
            return il2cpp::get_class<app::RaceSettings__Class>(type_info, "", "RaceSettings");
        }
        inline app::RaceSettings* create() {
            return il2cpp::create_object<app::RaceSettings>(get_class());
        }
        inline app::RaceSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceSettings__Array>(get_class(), size);
        }
        inline app::RaceSettings__Array* create_array(const std::vector<app::RaceSettings*>& items) {
            return il2cpp::array_new<app::RaceSettings__Array>(get_class(), items);
        }
    } // namespace RaceSettings
} // namespace app::classes::types
