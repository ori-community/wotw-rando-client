#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
