#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererPostIntroductionInteractionBehaviour {
        namespace {
            app::WandererPostIntroductionInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        app::WandererPostIntroductionInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::WandererPostIntroductionInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPostIntroductionInteractionBehaviour__Class>(type_info, "", "WandererPostIntroductionInteractionBehaviour");
        }
        inline app::WandererPostIntroductionInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererPostIntroductionInteractionBehaviour>(get_class());
        }
    } // namespace WandererPostIntroductionInteractionBehaviour
} // namespace app::classes::types
