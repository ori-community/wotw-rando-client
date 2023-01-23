#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateWwiseStateManager_ResetStateData__Array__Class.h>
#include <Modloader/app/structs/UberStateWwiseStateManager_ResetStateData__Array.h>

namespace app::classes::types {
    namespace UberStateWwiseStateManager_ResetStateData__Array {
        namespace {
            inline app::UberStateWwiseStateManager_ResetStateData__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberStateWwiseStateManager_ResetStateData__Array__Class** type_info = &type_info_ref;
        inline app::UberStateWwiseStateManager_ResetStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateWwiseStateManager_ResetStateData__Array__Class>(type_info, "Moon.Wwise", "UberStateWwiseStateManager+ResetStateData[]");
        }
        inline app::UberStateWwiseStateManager_ResetStateData__Array* create() {
            return il2cpp::create_object<app::UberStateWwiseStateManager_ResetStateData__Array>(get_class());
        }
    } // namespace UberStateWwiseStateManager_ResetStateData__Array
} // namespace app::classes::types
