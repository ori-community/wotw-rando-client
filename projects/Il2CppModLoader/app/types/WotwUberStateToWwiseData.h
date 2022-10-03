#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData {
        namespace {
            app::WotwUberStateToWwiseData__Class* type_info_ref = nullptr;
        }
        app::WotwUberStateToWwiseData__Class** type_info = &type_info_ref;
        inline app::WotwUberStateToWwiseData__Class* get_class() {
            return il2cpp::get_class<app::WotwUberStateToWwiseData__Class>(type_info, "", "WotwUberStateToWwiseData");
        }
        inline app::WotwUberStateToWwiseData* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData>(get_class());
        }
    } // namespace WotwUberStateToWwiseData
} // namespace app::classes::types
