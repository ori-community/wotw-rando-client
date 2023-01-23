#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChakramProjectile__Class.h>
#include <Modloader/app/structs/ChakramProjectile.h>

namespace app::classes::types {
    namespace ChakramProjectile {
        namespace {
            inline app::ChakramProjectile__Class* type_info_ref = nullptr;
        }
        inline app::ChakramProjectile__Class** type_info = &type_info_ref;
        inline app::ChakramProjectile__Class* get_class() {
            return il2cpp::get_class<app::ChakramProjectile__Class>(type_info, "", "ChakramProjectile");
        }
        inline app::ChakramProjectile* create() {
            return il2cpp::create_object<app::ChakramProjectile>(get_class());
        }
    } // namespace ChakramProjectile
} // namespace app::classes::types
