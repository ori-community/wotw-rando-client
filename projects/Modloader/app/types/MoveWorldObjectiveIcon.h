#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoveWorldObjectiveIcon__Class.h>
#include <Modloader/app/structs/MoveWorldObjectiveIcon.h>

namespace app::classes::types {
    namespace MoveWorldObjectiveIcon {
        namespace {
            inline app::MoveWorldObjectiveIcon__Class* type_info_ref = nullptr;
        }
        inline app::MoveWorldObjectiveIcon__Class** type_info = &type_info_ref;
        inline app::MoveWorldObjectiveIcon__Class* get_class() {
            return il2cpp::get_class<app::MoveWorldObjectiveIcon__Class>(type_info, "", "MoveWorldObjectiveIcon");
        }
        inline app::MoveWorldObjectiveIcon* create() {
            return il2cpp::create_object<app::MoveWorldObjectiveIcon>(get_class());
        }
    } // namespace MoveWorldObjectiveIcon
} // namespace app::classes::types
