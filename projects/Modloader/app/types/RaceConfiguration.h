#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceConfiguration__Class.h>
#include <Modloader/app/structs/RaceConfiguration.h>

namespace app::classes::types {
    namespace RaceConfiguration {
        inline app::RaceConfiguration__Class** type_info = (app::RaceConfiguration__Class**)(modloader::win::memory::resolve_rva(0x0475C6A0));
        inline app::RaceConfiguration__Class* get_class() {
            return il2cpp::get_class<app::RaceConfiguration__Class>(type_info, "", "RaceConfiguration");
        }
        inline app::RaceConfiguration* create() {
            return il2cpp::create_object<app::RaceConfiguration>(get_class());
        }
    } // namespace RaceConfiguration
} // namespace app::classes::types
