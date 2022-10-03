#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolManager_ContinuousTimesliceJob {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolManager_ContinuousTimesliceJob__Class** type_info;
        inline app::UberPoolManager_ContinuousTimesliceJob__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolManager_ContinuousTimesliceJob__Class>(type_info, "", "UberPoolManager", "ContinuousTimesliceJob");
        }
        inline app::UberPoolManager_ContinuousTimesliceJob* create() {
            return il2cpp::create_object<app::UberPoolManager_ContinuousTimesliceJob>(get_class());
        }
    } // namespace UberPoolManager_ContinuousTimesliceJob
} // namespace app::classes::types
