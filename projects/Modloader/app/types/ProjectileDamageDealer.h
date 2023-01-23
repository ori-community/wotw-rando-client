#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProjectileDamageDealer__Class.h>
#include <Modloader/app/structs/ProjectileDamageDealer.h>

namespace app::classes::types {
    namespace ProjectileDamageDealer {
        namespace {
            inline app::ProjectileDamageDealer__Class* type_info_ref = nullptr;
        }
        inline app::ProjectileDamageDealer__Class** type_info = &type_info_ref;
        inline app::ProjectileDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::ProjectileDamageDealer__Class>(type_info, "", "ProjectileDamageDealer");
        }
        inline app::ProjectileDamageDealer* create() {
            return il2cpp::create_object<app::ProjectileDamageDealer>(get_class());
        }
    } // namespace ProjectileDamageDealer
} // namespace app::classes::types
