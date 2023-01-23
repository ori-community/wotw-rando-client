#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WandererPostIntroductionInteractionBehaviour__Class.h>
#include <Modloader/app/structs/WandererPostIntroductionInteractionBehaviour.h>

namespace app::classes::types {
    namespace WandererPostIntroductionInteractionBehaviour {
        namespace {
            inline app::WandererPostIntroductionInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::WandererPostIntroductionInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererPostIntroductionInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostIntroductionInteractionBehaviour__Class>(type_info, "", "WandererPostIntroductionInteractionBehaviour");
        }
        inline app::WandererPostIntroductionInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererPostIntroductionInteractionBehaviour>(get_class());
        }
    } // namespace WandererPostIntroductionInteractionBehaviour
} // namespace app::classes::types
