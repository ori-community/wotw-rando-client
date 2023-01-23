#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SinMovingPlatform__Class.h>
#include <Modloader/app/structs/SinMovingPlatform.h>

namespace app::classes::types {
    namespace SinMovingPlatform {
        namespace {
            inline app::SinMovingPlatform__Class* type_info_ref = nullptr;
        }
        inline app::SinMovingPlatform__Class** type_info = &type_info_ref;
        inline app::SinMovingPlatform__Class* get_class() {
            return il2cpp::get_class<app::SinMovingPlatform__Class>(type_info, "", "SinMovingPlatform");
        }
        inline app::SinMovingPlatform* create() {
            return il2cpp::create_object<app::SinMovingPlatform>(get_class());
        }
    } // namespace SinMovingPlatform
} // namespace app::classes::types
