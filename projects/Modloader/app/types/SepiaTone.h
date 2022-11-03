#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SepiaTone {
        namespace {
            inline app::SepiaTone__Class* type_info_ref = nullptr;
        }
        inline app::SepiaTone__Class** type_info = &type_info_ref;
        inline app::SepiaTone__Class* get_class() {
            return il2cpp::get_class<app::SepiaTone__Class>(type_info, "UnityStandardAssets.ImageEffects", "SepiaTone");
        }
        inline app::SepiaTone* create() {
            return il2cpp::create_object<app::SepiaTone>(get_class());
        }
    } // namespace SepiaTone
} // namespace app::classes::types
