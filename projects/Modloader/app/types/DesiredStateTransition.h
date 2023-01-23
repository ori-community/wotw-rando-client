#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesiredStateTransition__Class.h>
#include <Modloader/app/structs/DesiredStateTransition.h>
#include <Modloader/app/structs/DesiredStateTransition__Boxed.h>

namespace app::classes::types {
    namespace DesiredStateTransition {
        inline app::DesiredStateTransition__Class** type_info = (app::DesiredStateTransition__Class**)(modloader::win::memory::resolve_rva(0x0471C450));
        inline app::DesiredStateTransition__Class* get_class() {
            return il2cpp::get_class<app::DesiredStateTransition__Class>(type_info, "Moon.Timeline", "DesiredStateTransition");
        }
        inline app::DesiredStateTransition* create() {
            return il2cpp::create_object<app::DesiredStateTransition>(get_class());
        }
        inline app::DesiredStateTransition__Boxed* box(app::DesiredStateTransition value) {
            return il2cpp::box_value<app::DesiredStateTransition__Boxed>(get_class(), value);
        }
    } // namespace DesiredStateTransition
} // namespace app::classes::types
