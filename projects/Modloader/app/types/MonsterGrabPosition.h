#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonsterGrabPosition__Class.h>
#include <Modloader/app/structs/MonsterGrabPosition.h>

namespace app::classes::types {
    namespace MonsterGrabPosition {
        namespace {
            inline app::MonsterGrabPosition__Class* type_info_ref = nullptr;
        }
        inline app::MonsterGrabPosition__Class** type_info = &type_info_ref;
        inline app::MonsterGrabPosition__Class* get_class() {
            return il2cpp::get_class<app::MonsterGrabPosition__Class>(type_info, "", "MonsterGrabPosition");
        }
        inline app::MonsterGrabPosition* create() {
            return il2cpp::create_object<app::MonsterGrabPosition>(get_class());
        }
    } // namespace MonsterGrabPosition
} // namespace app::classes::types
