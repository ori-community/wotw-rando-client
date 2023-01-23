#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MudkisseBiteDashAttack__Class.h>
#include <Modloader/app/structs/MudkisseBiteDashAttack.h>

namespace app::classes::types {
    namespace MudkisseBiteDashAttack {
        namespace {
            inline app::MudkisseBiteDashAttack__Class* type_info_ref = nullptr;
        }
        inline app::MudkisseBiteDashAttack__Class** type_info = &type_info_ref;
        inline app::MudkisseBiteDashAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisseBiteDashAttack__Class>(type_info, "", "MudkisseBiteDashAttack");
        }
        inline app::MudkisseBiteDashAttack* create() {
            return il2cpp::create_object<app::MudkisseBiteDashAttack>(get_class());
        }
    } // namespace MudkisseBiteDashAttack
} // namespace app::classes::types
