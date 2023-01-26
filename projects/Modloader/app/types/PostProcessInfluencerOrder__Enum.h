#pragma once
#include <Modloader/app/structs/PostProcessInfluencerOrder__Enum.h>
#include <Modloader/app/structs/PostProcessInfluencerOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostProcessInfluencerOrder__Enum {
        inline app::PostProcessInfluencerOrder__Enum__Class** type_info() {
            static app::PostProcessInfluencerOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostProcessInfluencerOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostProcessInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::PostProcessInfluencerOrder__Enum__Class>(type_info(), "", "PostProcessInfluencerOrder");
        }
        inline app::PostProcessInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::PostProcessInfluencerOrder__Enum>(get_class());
        }
    } // namespace PostProcessInfluencerOrder__Enum
} // namespace app::classes::types
