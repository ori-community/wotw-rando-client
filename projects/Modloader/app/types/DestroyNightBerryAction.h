#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DestroyNightBerryAction__Class.h>
#include <Modloader/app/structs/DestroyNightBerryAction.h>

namespace app::classes::types {
    namespace DestroyNightBerryAction {
        namespace {
            inline app::DestroyNightBerryAction__Class* type_info_ref = nullptr;
        }
        inline app::DestroyNightBerryAction__Class** type_info = &type_info_ref;
        inline app::DestroyNightBerryAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyNightBerryAction__Class>(type_info, "", "DestroyNightBerryAction");
        }
        inline app::DestroyNightBerryAction* create() {
            return il2cpp::create_object<app::DestroyNightBerryAction>(get_class());
        }
    } // namespace DestroyNightBerryAction
} // namespace app::classes::types
