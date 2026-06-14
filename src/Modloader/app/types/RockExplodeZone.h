#pragma once
#include <Modloader/app/structs/RockExplodeZone.h>
#include <Modloader/app/structs/RockExplodeZone__Array.h>
#include <Modloader/app/structs/RockExplodeZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockExplodeZone {
        inline app::RockExplodeZone__Class** type_info() {
            static app::RockExplodeZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RockExplodeZone__Class**)(modloader::win::memory::resolve_rva(0x0478D070));
            }
            return cache;
        }
        inline app::RockExplodeZone__Class* get_class() {
            return il2cpp::get_class<app::RockExplodeZone__Class>(type_info(), "", "RockExplodeZone");
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
