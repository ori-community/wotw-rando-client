#pragma once
#include <Modloader/app/structs/Bloom_BloomScreenBlendMode__Enum.h>
#include <Modloader/app/structs/Bloom_BloomScreenBlendMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bloom_BloomScreenBlendMode__Enum {
        inline app::Bloom_BloomScreenBlendMode__Enum__Class** type_info() {
            static app::Bloom_BloomScreenBlendMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bloom_BloomScreenBlendMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bloom_BloomScreenBlendMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Bloom_BloomScreenBlendMode__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "Bloom", "BloomScreenBlendMode");
        }
        inline app::Bloom_BloomScreenBlendMode__Enum* create() {
            return il2cpp::create_object<app::Bloom_BloomScreenBlendMode__Enum>(get_class());
        }
    } // namespace Bloom_BloomScreenBlendMode__Enum
} // namespace app::classes::types
