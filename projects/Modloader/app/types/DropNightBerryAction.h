#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DropNightBerryAction__Class.h>
#include <Modloader/app/structs/DropNightBerryAction.h>

namespace app::classes::types {
    namespace DropNightBerryAction {
        namespace {
            inline app::DropNightBerryAction__Class* type_info_ref = nullptr;
        }
        inline app::DropNightBerryAction__Class** type_info = &type_info_ref;
        inline app::DropNightBerryAction__Class* get_class() {
            return il2cpp::get_class<app::DropNightBerryAction__Class>(type_info, "", "DropNightBerryAction");
        }
        inline app::DropNightBerryAction* create() {
            return il2cpp::create_object<app::DropNightBerryAction>(get_class());
        }
    } // namespace DropNightBerryAction
} // namespace app::classes::types
