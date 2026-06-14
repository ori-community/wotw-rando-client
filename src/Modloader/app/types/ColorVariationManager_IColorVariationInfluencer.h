#pragma once
#include <Modloader/app/structs/ColorVariationManager_IColorVariationInfluencer.h>
#include <Modloader/app/structs/ColorVariationManager_IColorVariationInfluencer__Array.h>
#include <Modloader/app/structs/ColorVariationManager_IColorVariationInfluencer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorVariationManager_IColorVariationInfluencer {
        inline app::ColorVariationManager_IColorVariationInfluencer__Class** type_info() {
            static app::ColorVariationManager_IColorVariationInfluencer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ColorVariationManager_IColorVariationInfluencer__Class**)(modloader::win::memory::resolve_rva(0x0472EFD0));
            }
            return cache;
        }
        inline app::ColorVariationManager_IColorVariationInfluencer__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorVariationManager_IColorVariationInfluencer__Class>(type_info(), "", "ColorVariationManager", "IColorVariationInfluencer");
        }
        inline app::ColorVariationManager_IColorVariationInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::ColorVariationManager_IColorVariationInfluencer__Array>(get_class(), size);
        }
        inline app::ColorVariationManager_IColorVariationInfluencer__Array* create_array(const std::vector<app::ColorVariationManager_IColorVariationInfluencer*>& items) {
            return il2cpp::array_new<app::ColorVariationManager_IColorVariationInfluencer__Array>(get_class(), items);
        }
    } // namespace ColorVariationManager_IColorVariationInfluencer
} // namespace app::classes::types
