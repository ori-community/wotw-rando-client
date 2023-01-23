#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArtOptimizerDataContainer__Class.h>
#include <Modloader/app/structs/ArtOptimizerDataContainer.h>

namespace app::classes::types {
    namespace ArtOptimizerDataContainer {
        namespace {
            inline app::ArtOptimizerDataContainer__Class* type_info_ref = nullptr;
        }
        inline app::ArtOptimizerDataContainer__Class** type_info = &type_info_ref;
        inline app::ArtOptimizerDataContainer__Class* get_class() {
            return il2cpp::get_class<app::ArtOptimizerDataContainer__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizerDataContainer");
        }
        inline app::ArtOptimizerDataContainer* create() {
            return il2cpp::create_object<app::ArtOptimizerDataContainer>(get_class());
        }
    } // namespace ArtOptimizerDataContainer
} // namespace app::classes::types
