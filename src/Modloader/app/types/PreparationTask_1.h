#pragma once
#include <Modloader/app/structs/PreparationTask_1.h>
#include <Modloader/app/structs/PreparationTask_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreparationTask_1 {
        inline app::PreparationTask_1__Class** type_info() {
            static app::PreparationTask_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PreparationTask_1__Class**)(modloader::win::memory::resolve_rva(0x0478FDA0));
            }
            return cache;
        }
        inline app::PreparationTask_1__Class* get_class() {
            return il2cpp::get_class<app::PreparationTask_1__Class>(type_info(), "Moon.ArtOptimization", "PreparationTask");
        }
        inline app::PreparationTask_1* create() {
            return il2cpp::create_object<app::PreparationTask_1>(get_class());
        }
    } // namespace PreparationTask_1
} // namespace app::classes::types
