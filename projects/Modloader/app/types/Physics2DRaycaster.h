#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Physics2DRaycaster__Class.h>
#include <Modloader/app/structs/Physics2DRaycaster.h>

namespace app::classes::types {
    namespace Physics2DRaycaster {
        namespace {
            inline app::Physics2DRaycaster__Class* type_info_ref = nullptr;
        }
        inline app::Physics2DRaycaster__Class** type_info = &type_info_ref;
        inline app::Physics2DRaycaster__Class* get_class() {
            return il2cpp::get_class<app::Physics2DRaycaster__Class>(type_info, "UnityEngine.EventSystems", "Physics2DRaycaster");
        }
        inline app::Physics2DRaycaster* create() {
            return il2cpp::create_object<app::Physics2DRaycaster>(get_class());
        }
    } // namespace Physics2DRaycaster
} // namespace app::classes::types
