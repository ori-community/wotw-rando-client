#pragma once
#include <Modloader/app/structs/UberWaterReflectionView.h>
#include <Modloader/app/structs/UberWaterReflectionView__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView {
        inline app::UberWaterReflectionView__Class** type_info() {
            static app::UberWaterReflectionView__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberWaterReflectionView__Class**)(modloader::win::memory::resolve_rva(0x04776CC0));
            }
            return cache;
        }
        inline app::UberWaterReflectionView__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionView__Class>(type_info(), "", "UberWaterReflectionView");
        }
        inline app::UberWaterReflectionView* create() {
            return il2cpp::create_object<app::UberWaterReflectionView>(get_class());
        }
    } // namespace UberWaterReflectionView
} // namespace app::classes::types
