#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NvnMemoryCaptureAgent {
        namespace {
            app::NvnMemoryCaptureAgent__Class* type_info_ref = nullptr;
        }
        app::NvnMemoryCaptureAgent__Class** type_info = &type_info_ref;
        inline app::NvnMemoryCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::NvnMemoryCaptureAgent__Class>(type_info, "", "NvnMemoryCaptureAgent");
        }
        inline app::NvnMemoryCaptureAgent* create() {
            return il2cpp::create_object<app::NvnMemoryCaptureAgent>(get_class());
        }
    } // namespace NvnMemoryCaptureAgent
} // namespace app::classes::types
