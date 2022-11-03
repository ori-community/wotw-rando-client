#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MudkisserDeathReactionBehaviour {
        namespace {
            inline app::MudkisserDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MudkisserDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MudkisserDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserDeathReactionBehaviour__Class>(type_info, "", "MudkisserDeathReactionBehaviour");
        }
        inline app::MudkisserDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::MudkisserDeathReactionBehaviour>(get_class());
        }
    } // namespace MudkisserDeathReactionBehaviour
} // namespace app::classes::types
