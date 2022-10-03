#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMetaData {
        namespace {
            app::AnimationMetaData__Class* type_info_ref = nullptr;
        }
        app::AnimationMetaData__Class** type_info = &type_info_ref;
        inline app::AnimationMetaData__Class* get_class() {
            return il2cpp::get_class<app::AnimationMetaData__Class>(type_info, "", "AnimationMetaData");
        }
        inline app::AnimationMetaData* create() {
            return il2cpp::create_object<app::AnimationMetaData>(get_class());
        }
    } // namespace AnimationMetaData
} // namespace app::classes::types
