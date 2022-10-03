#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MirroredAnimationSet {
        namespace {
            app::MirroredAnimationSet__Class* type_info_ref = nullptr;
        }
        app::MirroredAnimationSet__Class** type_info = &type_info_ref;
        inline app::MirroredAnimationSet__Class* get_class() {
            return il2cpp::get_class<app::MirroredAnimationSet__Class>(type_info, "", "MirroredAnimationSet");
        }
        inline app::MirroredAnimationSet* create() {
            return il2cpp::create_object<app::MirroredAnimationSet>(get_class());
        }
    } // namespace MirroredAnimationSet
} // namespace app::classes::types
