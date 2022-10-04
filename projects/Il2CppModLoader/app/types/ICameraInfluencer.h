#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICameraInfluencer {
        namespace {
            app::ICameraInfluencer__Class* type_info_ref = nullptr;
        }
        app::ICameraInfluencer__Class** type_info = &type_info_ref;
        inline app::ICameraInfluencer__Class* get_class() {
            return il2cpp::get_class<app::ICameraInfluencer__Class>(type_info, "", "ICameraInfluencer");
        }
        inline app::ICameraInfluencer* create() {
            return il2cpp::create_object<app::ICameraInfluencer>(get_class());
        }
    } // namespace ICameraInfluencer
} // namespace app::classes::types
