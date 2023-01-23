#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OneDSEventPipeline__Class.h>
#include <Modloader/app/structs/OneDSEventPipeline.h>

namespace app::classes::types {
    namespace OneDSEventPipeline {
        namespace {
            inline app::OneDSEventPipeline__Class* type_info_ref = nullptr;
        }
        inline app::OneDSEventPipeline__Class** type_info = &type_info_ref;
        inline app::OneDSEventPipeline__Class* get_class() {
            return il2cpp::get_class<app::OneDSEventPipeline__Class>(type_info, "PlayFab.Pipeline", "OneDSEventPipeline");
        }
        inline app::OneDSEventPipeline* create() {
            return il2cpp::create_object<app::OneDSEventPipeline>(get_class());
        }
    } // namespace OneDSEventPipeline
} // namespace app::classes::types
