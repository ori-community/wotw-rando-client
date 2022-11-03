#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockExplodeZone {
        inline app::RockExplodeZone__Class** type_info = (app::RockExplodeZone__Class**)(modloader::win::memory::resolve_rva(0x0478D070));
        inline app::RockExplodeZone__Class* get_class() {
            return il2cpp::get_class<app::RockExplodeZone__Class>(type_info, "", "RockExplodeZone");
        }
        inline app::RockExplodeZone* create() {
            return il2cpp::create_object<app::RockExplodeZone>(get_class());
        }
        inline app::RockExplodeZone__Array* create_array(int size) {
            return il2cpp::array_new<app::RockExplodeZone__Array>(get_class(), size);
        }
        inline app::RockExplodeZone__Array* create_array(const std::vector<app::RockExplodeZone*>& items) {
            return il2cpp::array_new<app::RockExplodeZone__Array>(get_class(), items);
        }
    } // namespace RockExplodeZone
} // namespace app::classes::types
