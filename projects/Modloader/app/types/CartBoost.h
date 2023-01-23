#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartBoost__Class.h>
#include <Modloader/app/structs/CartBoost.h>

namespace app::classes::types {
    namespace CartBoost {
        namespace {
            inline app::CartBoost__Class* type_info_ref = nullptr;
        }
        inline app::CartBoost__Class** type_info = &type_info_ref;
        inline app::CartBoost__Class* get_class() {
            return il2cpp::get_class<app::CartBoost__Class>(type_info, "", "CartBoost");
        }
        inline app::CartBoost* create() {
            return il2cpp::create_object<app::CartBoost>(get_class());
        }
    } // namespace CartBoost
} // namespace app::classes::types
