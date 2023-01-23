#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Angle__Class.h>
#include <Modloader/app/structs/Angle.h>
#include <Modloader/app/structs/Angle__Boxed.h>

namespace app::classes::types {
    namespace Angle {
        inline app::Angle__Class** type_info = (app::Angle__Class**)(modloader::win::memory::resolve_rva(0x0471A278));
        inline app::Angle__Class* get_class() {
            return il2cpp::get_class<app::Angle__Class>(type_info, "Swing", "Angle");
        }
        inline app::Angle* create() {
            return il2cpp::create_object<app::Angle>(get_class());
        }
        inline app::Angle__Boxed* box(app::Angle value) {
            return il2cpp::box_value<app::Angle__Boxed>(get_class(), value);
        }
    } // namespace Angle
} // namespace app::classes::types
