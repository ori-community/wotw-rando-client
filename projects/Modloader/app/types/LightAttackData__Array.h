#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightAttackData__Array {
        namespace {
            inline app::LightAttackData__Array__Class* type_info_ref = nullptr;
        }
        inline app::LightAttackData__Array__Class** type_info = &type_info_ref;
        inline app::LightAttackData__Array__Class* get_class() {
            return il2cpp::get_class<app::LightAttackData__Array__Class>(type_info, "", "LightAttackData[]");
        }
        inline app::LightAttackData__Array* create() {
            return il2cpp::create_object<app::LightAttackData__Array>(get_class());
        }
    } // namespace LightAttackData__Array
} // namespace app::classes::types
