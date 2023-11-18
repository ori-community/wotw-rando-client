#pragma once
#include <Modloader/app/structs/ScenesManagerPrediction.h>
#include <Modloader/app/structs/ScenesManagerPrediction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerPrediction {
        inline app::ScenesManagerPrediction__Class** type_info() {
            static app::ScenesManagerPrediction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManagerPrediction__Class**)(modloader::win::memory::resolve_rva(0x047657A8));
            }
            return cache;
        }
        inline app::ScenesManagerPrediction__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerPrediction__Class>(type_info(), "", "ScenesManagerPrediction");
        }
        inline app::ScenesManagerPrediction* create() {
            return il2cpp::create_object<app::ScenesManagerPrediction>(get_class());
        }
    } // namespace ScenesManagerPrediction
} // namespace app::classes::types
