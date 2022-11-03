#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriPositionPrediction {
        inline app::OriPositionPrediction__Class** type_info = (app::OriPositionPrediction__Class**)(modloader::win::memory::resolve_rva(0x0473C040));
        inline app::OriPositionPrediction__Class* get_class() {
            return il2cpp::get_class<app::OriPositionPrediction__Class>(type_info, "", "OriPositionPrediction");
        }
        inline app::OriPositionPrediction* create() {
            return il2cpp::create_object<app::OriPositionPrediction>(get_class());
        }
    } // namespace OriPositionPrediction
} // namespace app::classes::types
