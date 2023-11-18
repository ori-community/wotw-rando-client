#pragma once
#include <Modloader/app/structs/ColorVariationManager_ColorVariationInfluencerOrder__Enum.h>
#include <Modloader/app/structs/ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariationManager_ColorVariationInfluencerOrder__Enum {
        inline app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class** type_info() {
            static app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class>(type_info(), "", "ColorVariationManager", "ColorVariationInfluencerOrder");
        }
        inline app::ColorVariationManager_ColorVariationInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::ColorVariationManager_ColorVariationInfluencerOrder__Enum>(get_class());
        }
    } // namespace ColorVariationManager_ColorVariationInfluencerOrder__Enum
} // namespace app::classes::types
