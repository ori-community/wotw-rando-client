#pragma once
#include <Modloader/app/structs/UberWaterReflectionView_GroupViews.h>
#include <Modloader/app/structs/UberWaterReflectionView_GroupViews__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_GroupViews {
        inline app::UberWaterReflectionView_GroupViews__Class** type_info() {
            static app::UberWaterReflectionView_GroupViews__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterReflectionView_GroupViews__Class**)(modloader::win::memory::resolve_rva(0x04753EA0));
            }
            return cache;
        }
        inline app::UberWaterReflectionView_GroupViews__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_GroupViews__Class>(type_info(), "", "UberWaterReflectionView", "GroupViews");
        }
        inline app::UberWaterReflectionView_GroupViews* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_GroupViews>(get_class());
        }
    } // namespace UberWaterReflectionView_GroupViews
} // namespace app::classes::types
