#pragma once
#include <Modloader/app/structs/SpaceMongerWidget_UberStateGroupDataSizeComparer.h>
#include <Modloader/app/structs/SpaceMongerWidget_UberStateGroupDataSizeComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpaceMongerWidget_UberStateGroupDataSizeComparer {
        inline app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class** type_info() {
            static app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class**)(modloader::win::memory::resolve_rva(0x047897B8));
            }
            return cache;
        }
        inline app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::SpaceMongerWidget_UberStateGroupDataSizeComparer__Class>(type_info(), "Moon.UberStateVisualization", "SpaceMongerWidget", "UberStateGroupDataSizeComparer");
        }
        inline app::SpaceMongerWidget_UberStateGroupDataSizeComparer* create() {
            return il2cpp::create_object<app::SpaceMongerWidget_UberStateGroupDataSizeComparer>(get_class());
        }
    } // namespace SpaceMongerWidget_UberStateGroupDataSizeComparer
} // namespace app::classes::types
