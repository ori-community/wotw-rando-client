#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpikeSlugEntity_AnimsToSwap__Class.h>
#include <Modloader/app/structs/SpikeSlugEntity_AnimsToSwap.h>

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
