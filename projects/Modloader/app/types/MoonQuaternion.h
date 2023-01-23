#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonQuaternion__Class.h>
#include <Modloader/app/structs/MoonQuaternion.h>

namespace app::classes::types {
    namespace MoonQuaternion {
        inline app::MoonQuaternion__Class** type_info = (app::MoonQuaternion__Class**)(modloader::win::memory::resolve_rva(0x04759DE0));
        inline app::MoonQuaternion__Class* get_class() {
            return il2cpp::get_class<app::MoonQuaternion__Class>(type_info, "Moon", "MoonQuaternion");
        }
        inline app::MoonQuaternion* create() {
            return il2cpp::create_object<app::MoonQuaternion>(get_class());
        }
    } // namespace MoonQuaternion
} // namespace app::classes::types
