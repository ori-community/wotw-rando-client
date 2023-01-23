#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BossesNamesMessages__Class.h>
#include <Modloader/app/structs/BossesNamesMessages.h>

namespace app::classes::types {
    namespace BossesNamesMessages {
        namespace {
            inline app::BossesNamesMessages__Class* type_info_ref = nullptr;
        }
        inline app::BossesNamesMessages__Class** type_info = &type_info_ref;
        inline app::BossesNamesMessages__Class* get_class() {
            return il2cpp::get_class<app::BossesNamesMessages__Class>(type_info, "", "BossesNamesMessages");
        }
        inline app::BossesNamesMessages* create() {
            return il2cpp::create_object<app::BossesNamesMessages>(get_class());
        }
    } // namespace BossesNamesMessages
} // namespace app::classes::types
