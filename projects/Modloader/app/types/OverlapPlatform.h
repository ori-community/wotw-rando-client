#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OverlapPlatform__Class.h>
#include <Modloader/app/structs/OverlapPlatform.h>

namespace app::classes::types {
    namespace OverlapPlatform {
        namespace {
            inline app::OverlapPlatform__Class* type_info_ref = nullptr;
        }
        inline app::OverlapPlatform__Class** type_info = &type_info_ref;
        inline app::OverlapPlatform__Class* get_class() {
            return il2cpp::get_class<app::OverlapPlatform__Class>(type_info, "", "OverlapPlatform");
        }
        inline app::OverlapPlatform* create() {
            return il2cpp::create_object<app::OverlapPlatform>(get_class());
        }
    } // namespace OverlapPlatform
} // namespace app::classes::types
