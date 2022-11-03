#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBounceAbility {
        namespace {
            inline app::SeinBounceAbility__Class* type_info_ref = nullptr;
        }
        inline app::SeinBounceAbility__Class** type_info = &type_info_ref;
        inline app::SeinBounceAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinBounceAbility__Class>(type_info, "", "SeinBounceAbility");
        }
        inline app::SeinBounceAbility* create() {
            return il2cpp::create_object<app::SeinBounceAbility>(get_class());
        }
    } // namespace SeinBounceAbility
} // namespace app::classes::types
