#pragma once
#include <Modloader/app/structs/DeathInformation.h>
#include <Modloader/app/structs/DeathInformation__Array.h>
#include <Modloader/app/structs/DeathInformation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeathInformation {
        inline app::DeathInformation__Class** type_info() {
            static app::DeathInformation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeathInformation__Class**)(modloader::win::memory::resolve_rva(0x04762B48));
            }
            return cache;
        }
        inline app::DeathInformation__Class* get_class() {
            return il2cpp::get_class<app::DeathInformation__Class>(type_info(), "", "DeathInformation");
        }
        inline app::DeathInformation* create() {
            return il2cpp::create_object<app::DeathInformation>(get_class());
        }
        inline app::DeathInformation__Array* create_array(int size) {
            return il2cpp::array_new<app::DeathInformation__Array>(get_class(), size);
        }
        inline app::DeathInformation__Array* create_array(const std::vector<app::DeathInformation*>& items) {
            return il2cpp::array_new<app::DeathInformation__Array>(get_class(), items);
        }
    } // namespace DeathInformation
} // namespace app::classes::types
