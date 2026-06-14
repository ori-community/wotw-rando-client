#pragma once
#include <Modloader/app/structs/LensflareStyle34__Enum.h>
#include <Modloader/app/structs/LensflareStyle34__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LensflareStyle34__Enum {
        inline app::LensflareStyle34__Enum__Class** type_info() {
            static app::LensflareStyle34__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LensflareStyle34__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LensflareStyle34__Enum__Class* get_class() {
            return il2cpp::get_class<app::LensflareStyle34__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "LensflareStyle34");
        }
        inline app::LensflareStyle34__Enum* create() {
            return il2cpp::create_object<app::LensflareStyle34__Enum>(get_class());
        }
    } // namespace LensflareStyle34__Enum
} // namespace app::classes::types
