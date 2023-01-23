#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateToWwiseData__Class.h>
#include <Modloader/app/structs/UberStateToWwiseData.h>

namespace app::classes::types {
    namespace UberStateToWwiseData {
        namespace {
            inline app::UberStateToWwiseData__Class* type_info_ref = nullptr;
        }
        inline app::UberStateToWwiseData__Class** type_info = &type_info_ref;
        inline app::UberStateToWwiseData__Class* get_class() {
            return il2cpp::get_class<app::UberStateToWwiseData__Class>(type_info, "Moon.Wwise", "UberStateToWwiseData");
        }
        inline app::UberStateToWwiseData* create() {
            return il2cpp::create_object<app::UberStateToWwiseData>(get_class());
        }
    } // namespace UberStateToWwiseData
} // namespace app::classes::types
