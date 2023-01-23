#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MudkisserWhipAttack__Class.h>
#include <Modloader/app/structs/MudkisserWhipAttack.h>

namespace app::classes::types {
    namespace MudkisserWhipAttack {
        namespace {
            inline app::MudkisserWhipAttack__Class* type_info_ref = nullptr;
        }
        inline app::MudkisserWhipAttack__Class** type_info = &type_info_ref;
        inline app::MudkisserWhipAttack__Class* get_class() {
            return il2cpp::get_class<app::MudkisserWhipAttack__Class>(type_info, "", "MudkisserWhipAttack");
        }
        inline app::MudkisserWhipAttack* create() {
            return il2cpp::create_object<app::MudkisserWhipAttack>(get_class());
        }
    } // namespace MudkisserWhipAttack
} // namespace app::classes::types
