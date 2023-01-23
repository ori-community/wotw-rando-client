#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Bloom_1__Class.h>
#include <Modloader/app/structs/Bloom_1.h>

namespace app::classes::types {
    namespace Bloom_1 {
        namespace {
            inline app::Bloom_1__Class* type_info_ref = nullptr;
        }
        inline app::Bloom_1__Class** type_info = &type_info_ref;
        inline app::Bloom_1__Class* get_class() {
            return il2cpp::get_class<app::Bloom_1__Class>(type_info, "UnityStandardAssets.CinematicEffects", "Bloom");
        }
        inline app::Bloom_1* create() {
            return il2cpp::create_object<app::Bloom_1>(get_class());
        }
    } // namespace Bloom_1
} // namespace app::classes::types
