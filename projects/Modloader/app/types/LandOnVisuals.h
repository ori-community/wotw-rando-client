#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LandOnVisuals__Class.h>
#include <Modloader/app/structs/LandOnVisuals.h>

namespace app::classes::types {
    namespace LandOnVisuals {
        inline app::LandOnVisuals__Class** type_info = (app::LandOnVisuals__Class**)(modloader::win::memory::resolve_rva(0x04754E80));
        inline app::LandOnVisuals__Class* get_class() {
            return il2cpp::get_class<app::LandOnVisuals__Class>(type_info, "", "LandOnVisuals");
        }
        inline app::LandOnVisuals* create() {
            return il2cpp::create_object<app::LandOnVisuals>(get_class());
        }
    } // namespace LandOnVisuals
} // namespace app::classes::types
