#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ColorVariationManager_ColorVariationInfluencerOrder__Enum {
        namespace {
            inline app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class** type_info = &type_info_ref;
        inline app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorVariationManager_ColorVariationInfluencerOrder__Enum__Class>(type_info, "", "ColorVariationManager", "ColorVariationInfluencerOrder");
        }
        inline app::ColorVariationManager_ColorVariationInfluencerOrder__Enum* create() {
            return il2cpp::create_object<app::ColorVariationManager_ColorVariationInfluencerOrder__Enum>(get_class());
        }
    } // namespace ColorVariationManager_ColorVariationInfluencerOrder__Enum
} // namespace app::classes::types
