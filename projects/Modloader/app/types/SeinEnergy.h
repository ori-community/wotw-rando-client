#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEnergy__Class.h>
#include <Modloader/app/structs/SeinEnergy.h>

namespace app::classes::types {
    namespace SeinEnergy {
        inline app::SeinEnergy__Class** type_info = (app::SeinEnergy__Class**)(modloader::win::memory::resolve_rva(0x04773B88));
        inline app::SeinEnergy__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergy__Class>(type_info, "", "SeinEnergy");
        }
        inline app::SeinEnergy* create() {
            return il2cpp::create_object<app::SeinEnergy>(get_class());
        }
    } // namespace SeinEnergy
} // namespace app::classes::types
