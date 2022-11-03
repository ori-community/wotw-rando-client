#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NvnMemoryCaptureAgent {
        namespace {
            inline app::NvnMemoryCaptureAgent__Class* type_info_ref = nullptr;
        }
        inline app::NvnMemoryCaptureAgent__Class** type_info = &type_info_ref;
        inline app::NvnMemoryCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::NvnMemoryCaptureAgent__Class>(type_info, "", "NvnMemoryCaptureAgent");
        }
        inline app::NvnMemoryCaptureAgent* create() {
            return il2cpp::create_object<app::NvnMemoryCaptureAgent>(get_class());
        }
    } // namespace NvnMemoryCaptureAgent
} // namespace app::classes::types
