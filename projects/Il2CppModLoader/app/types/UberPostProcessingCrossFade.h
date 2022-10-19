#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPostProcessingCrossFade {
        namespace {
            inline app::UberPostProcessingCrossFade__Class* type_info_ref = nullptr;
        }
        inline app::UberPostProcessingCrossFade__Class** type_info = &type_info_ref;
        inline app::UberPostProcessingCrossFade__Class* get_class() {
            return il2cpp::get_class<app::UberPostProcessingCrossFade__Class>(type_info, "", "UberPostProcessingCrossFade");
        }
        inline app::UberPostProcessingCrossFade* create() {
            return il2cpp::create_object<app::UberPostProcessingCrossFade>(get_class());
        }
    } // namespace UberPostProcessingCrossFade
} // namespace app::classes::types
