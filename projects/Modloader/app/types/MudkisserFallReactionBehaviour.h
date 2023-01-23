#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MudkisserFallReactionBehaviour__Class.h>
#include <Modloader/app/structs/MudkisserFallReactionBehaviour.h>

namespace app::classes::types {
    namespace MudkisserFallReactionBehaviour {
        namespace {
            inline app::MudkisserFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MudkisserFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MudkisserFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserFallReactionBehaviour__Class>(type_info, "", "MudkisserFallReactionBehaviour");
        }
        inline app::MudkisserFallReactionBehaviour* create() {
            return il2cpp::create_object<app::MudkisserFallReactionBehaviour>(get_class());
        }
    } // namespace MudkisserFallReactionBehaviour
} // namespace app::classes::types
