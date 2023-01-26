#pragma once
#include <Modloader/app/structs/MoonRenderPipelineView_ReleaseReason__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineView_ReleaseReason__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_ReleaseReason__Enum {
        inline app::MoonRenderPipelineView_ReleaseReason__Enum__Class** type_info() {
            static app::MoonRenderPipelineView_ReleaseReason__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonRenderPipelineView_ReleaseReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x04782180));
            }
            return cache;
        }
        inline app::MoonRenderPipelineView_ReleaseReason__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_ReleaseReason__Enum__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineView", "ReleaseReason");
        }
        inline app::MoonRenderPipelineView_ReleaseReason__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_ReleaseReason__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineView_ReleaseReason__Enum
} // namespace app::classes::types
