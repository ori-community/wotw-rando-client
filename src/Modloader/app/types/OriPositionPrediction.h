#pragma once
#include <Modloader/app/structs/OriPositionPrediction.h>
#include <Modloader/app/structs/OriPositionPrediction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriPositionPrediction {
        inline app::OriPositionPrediction__Class** type_info() {
            static app::OriPositionPrediction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OriPositionPrediction__Class**)(modloader::win::memory::resolve_rva(0x0473C040));
            }
            return cache;
        }
        inline app::OriPositionPrediction__Class* get_class() {
            return il2cpp::get_class<app::OriPositionPrediction__Class>(type_info(), "", "OriPositionPrediction");
        }
        inline app::OriPositionPrediction* create() {
            return il2cpp::create_object<app::OriPositionPrediction>(get_class());
        }
    } // namespace OriPositionPrediction
} // namespace app::classes::types
