#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColosseumTower__Class.h>
#include <Modloader/app/structs/ColosseumTower.h>

namespace app::classes::types {
    namespace ColosseumTower {
        namespace {
            inline app::ColosseumTower__Class* type_info_ref = nullptr;
        }
        inline app::ColosseumTower__Class** type_info = &type_info_ref;
        inline app::ColosseumTower__Class* get_class() {
            return il2cpp::get_class<app::ColosseumTower__Class>(type_info, "", "ColosseumTower");
        }
        inline app::ColosseumTower* create() {
            return il2cpp::create_object<app::ColosseumTower>(get_class());
        }
    } // namespace ColosseumTower
} // namespace app::classes::types
