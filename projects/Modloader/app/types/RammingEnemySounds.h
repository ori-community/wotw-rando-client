#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingEnemySounds__Class.h>
#include <Modloader/app/structs/RammingEnemySounds.h>

namespace app::classes::types {
    namespace RammingEnemySounds {
        namespace {
            inline app::RammingEnemySounds__Class* type_info_ref = nullptr;
        }
        inline app::RammingEnemySounds__Class** type_info = &type_info_ref;
        inline app::RammingEnemySounds__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemySounds__Class>(type_info, "", "RammingEnemySounds");
        }
        inline app::RammingEnemySounds* create() {
            return il2cpp::create_object<app::RammingEnemySounds>(get_class());
        }
    } // namespace RammingEnemySounds
} // namespace app::classes::types
