#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Bloom_TweakMode__Enum {
        namespace {
            inline app::Bloom_TweakMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Bloom_TweakMode__Enum__Class** type_info = &type_info_ref;
        inline app::Bloom_TweakMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Bloom_TweakMode__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "Bloom", "TweakMode");
        }
        inline app::Bloom_TweakMode__Enum* create() {
            return il2cpp::create_object<app::Bloom_TweakMode__Enum>(get_class());
        }
    } // namespace Bloom_TweakMode__Enum
} // namespace app::classes::types
