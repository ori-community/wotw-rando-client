#pragma once
#include <Modloader/app/structs/RaceConfiguration.h>
#include <Modloader/app/structs/RaceConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceConfiguration {
        inline app::RaceConfiguration__Class** type_info() {
            static app::RaceConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceConfiguration__Class**)(modloader::win::memory::resolve_rva(0x0475C6A0));
            }
            return cache;
        }
        inline app::RaceConfiguration__Class* get_class() {
            return il2cpp::get_class<app::RaceConfiguration__Class>(type_info(), "", "RaceConfiguration");
        }
        inline app::RaceConfiguration* create() {
            return il2cpp::create_object<app::RaceConfiguration>(get_class());
        }
    } // namespace RaceConfiguration
} // namespace app::classes::types
