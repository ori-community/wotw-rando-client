#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChakramProjectileEffect__Class.h>
#include <Modloader/app/structs/ChakramProjectileEffect.h>

namespace app::classes::types {
    namespace ChakramProjectileEffect {
        namespace {
            inline app::ChakramProjectileEffect__Class* type_info_ref = nullptr;
        }
        inline app::ChakramProjectileEffect__Class** type_info = &type_info_ref;
        inline app::ChakramProjectileEffect__Class* get_class() {
            return il2cpp::get_class<app::ChakramProjectileEffect__Class>(type_info, "", "ChakramProjectileEffect");
        }
        inline app::ChakramProjectileEffect* create() {
            return il2cpp::create_object<app::ChakramProjectileEffect>(get_class());
        }
    } // namespace ChakramProjectileEffect
} // namespace app::classes::types
