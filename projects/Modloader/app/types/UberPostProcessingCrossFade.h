#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade__Class.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade.h>

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
