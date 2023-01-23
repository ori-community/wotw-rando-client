#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColosseumSpitterEnemy__Class.h>
#include <Modloader/app/structs/ColosseumSpitterEnemy.h>

namespace app::classes::types {
    namespace ColosseumSpitterEnemy {
        namespace {
            inline app::ColosseumSpitterEnemy__Class* type_info_ref = nullptr;
        }
        inline app::ColosseumSpitterEnemy__Class** type_info = &type_info_ref;
        inline app::ColosseumSpitterEnemy__Class* get_class() {
            return il2cpp::get_class<app::ColosseumSpitterEnemy__Class>(type_info, "", "ColosseumSpitterEnemy");
        }
        inline app::ColosseumSpitterEnemy* create() {
            return il2cpp::create_object<app::ColosseumSpitterEnemy>(get_class());
        }
    } // namespace ColosseumSpitterEnemy
} // namespace app::classes::types
