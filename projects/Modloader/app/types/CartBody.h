#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartBody__Class.h>
#include <Modloader/app/structs/CartBody.h>

namespace app::classes::types {
    namespace CartBody {
        namespace {
            inline app::CartBody__Class* type_info_ref = nullptr;
        }
        inline app::CartBody__Class** type_info = &type_info_ref;
        inline app::CartBody__Class* get_class() {
            return il2cpp::get_class<app::CartBody__Class>(type_info, "", "CartBody");
        }
        inline app::CartBody* create() {
            return il2cpp::create_object<app::CartBody>(get_class());
        }
    } // namespace CartBody
} // namespace app::classes::types
