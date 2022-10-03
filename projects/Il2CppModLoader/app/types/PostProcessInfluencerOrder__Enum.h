#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostProcessInfluencerOrder__Enum {
        namespace {
            app::PostProcessInfluencerOrder__Enum__Class* type_info_ref = nullptr;
        }
        app::PostProcessInfluencerOrder__Enum__Class** type_info = &type_info_ref;
        inline app::PostProcessInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::PostProcessInfluencerOrder__Enum__Class>(type_info, "", "PostProcessInfluencerOrder");
        }
        inline app::PostProcessInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::PostProcessInfluencerOrder__Enum>(get_class());
        }
    } // namespace PostProcessInfluencerOrder__Enum
} // namespace app::classes::types
