#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PiranhaAttackBehaviour__Class.h>
#include <Modloader/app/structs/PiranhaAttackBehaviour.h>

namespace app::classes::types {
    namespace PiranhaAttackBehaviour {
        namespace {
            inline app::PiranhaAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaAttackBehaviour__Class>(type_info, "", "PiranhaAttackBehaviour");
        }
        inline app::PiranhaAttackBehaviour* create() {
            return il2cpp::create_object<app::PiranhaAttackBehaviour>(get_class());
        }
    } // namespace PiranhaAttackBehaviour
} // namespace app::classes::types
