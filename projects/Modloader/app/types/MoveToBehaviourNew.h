#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoveToBehaviourNew__Class.h>
#include <Modloader/app/structs/MoveToBehaviourNew.h>

namespace app::classes::types {
    namespace MoveToBehaviourNew {
        namespace {
            inline app::MoveToBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::MoveToBehaviourNew__Class** type_info = &type_info_ref;
        inline app::MoveToBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::MoveToBehaviourNew__Class>(type_info, "Moon", "MoveToBehaviourNew");
        }
        inline app::MoveToBehaviourNew* create() {
            return il2cpp::create_object<app::MoveToBehaviourNew>(get_class());
        }
    } // namespace MoveToBehaviourNew
} // namespace app::classes::types
