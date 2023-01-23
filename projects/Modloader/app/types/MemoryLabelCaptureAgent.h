#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemoryLabelCaptureAgent__Class.h>
#include <Modloader/app/structs/MemoryLabelCaptureAgent.h>

namespace app::classes::types {
    namespace MemoryLabelCaptureAgent {
        namespace {
            inline app::MemoryLabelCaptureAgent__Class* type_info_ref = nullptr;
        }
        inline app::MemoryLabelCaptureAgent__Class** type_info = &type_info_ref;
        inline app::MemoryLabelCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::MemoryLabelCaptureAgent__Class>(type_info, "", "MemoryLabelCaptureAgent");
        }
        inline app::MemoryLabelCaptureAgent* create() {
            return il2cpp::create_object<app::MemoryLabelCaptureAgent>(get_class());
        }
    } // namespace MemoryLabelCaptureAgent
} // namespace app::classes::types
