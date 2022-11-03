#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HDRBloomMode__Enum {
        namespace {
            inline app::HDRBloomMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HDRBloomMode__Enum__Class** type_info = &type_info_ref;
        inline app::HDRBloomMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HDRBloomMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "HDRBloomMode");
        }
        inline app::HDRBloomMode__Enum* create() {
            return il2cpp::create_object<app::HDRBloomMode__Enum>(get_class());
        }
    } // namespace HDRBloomMode__Enum
} // namespace app::classes::types
