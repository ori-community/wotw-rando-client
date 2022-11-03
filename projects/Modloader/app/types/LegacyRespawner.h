#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyRespawner {
        inline app::LegacyRespawner__Class** type_info = (app::LegacyRespawner__Class**)(modloader::win::memory::resolve_rva(0x04717EF8));
        inline app::LegacyRespawner__Class* get_class() {
            return il2cpp::get_class<app::LegacyRespawner__Class>(type_info, "", "LegacyRespawner");
        }
        inline app::LegacyRespawner* create() {
            return il2cpp::create_object<app::LegacyRespawner>(get_class());
        }
        inline app::LegacyRespawner__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyRespawner__Array>(get_class(), size);
        }
        inline app::LegacyRespawner__Array* create_array(const std::vector<app::LegacyRespawner*>& items) {
            return il2cpp::array_new<app::LegacyRespawner__Array>(get_class(), items);
        }
    } // namespace LegacyRespawner
} // namespace app::classes::types
