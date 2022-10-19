#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_AnimsToSwap {
        namespace {
            inline app::SpikeSlugEntity_AnimsToSwap__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugEntity_AnimsToSwap__Class** type_info = &type_info_ref;
        inline app::SpikeSlugEntity_AnimsToSwap__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_AnimsToSwap__Class>(type_info, "", "SpikeSlugEntity", "AnimsToSwap");
        }
        inline app::SpikeSlugEntity_AnimsToSwap* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_AnimsToSwap>(get_class());
        }
    } // namespace SpikeSlugEntity_AnimsToSwap
} // namespace app::classes::types
