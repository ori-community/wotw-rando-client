#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateWwiseStateManager_ResetStateData {
        inline app::UberStateWwiseStateManager_ResetStateData__Class** type_info = (app::UberStateWwiseStateManager_ResetStateData__Class**)(modloader::win::memory::resolve_rva(0x04729380));
        inline app::UberStateWwiseStateManager_ResetStateData__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateWwiseStateManager_ResetStateData__Class>(type_info, "Moon.Wwise", "UberStateWwiseStateManager", "ResetStateData");
        }
        inline app::UberStateWwiseStateManager_ResetStateData* create() {
            return il2cpp::create_object<app::UberStateWwiseStateManager_ResetStateData>(get_class());
        }
        inline app::UberStateWwiseStateManager_ResetStateData__Boxed* box(app::UberStateWwiseStateManager_ResetStateData value) {
            return il2cpp::box_value<app::UberStateWwiseStateManager_ResetStateData__Boxed>(get_class(), value);
        }
        inline app::UberStateWwiseStateManager_ResetStateData__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateWwiseStateManager_ResetStateData__Array>(get_class(), size);
        }
        inline app::UberStateWwiseStateManager_ResetStateData__Array* create_array(const std::vector<app::UberStateWwiseStateManager_ResetStateData>& items) {
            return il2cpp::array_new<app::UberStateWwiseStateManager_ResetStateData__Array>(get_class(), items);
        }
    } // namespace UberStateWwiseStateManager_ResetStateData
} // namespace app::classes::types
