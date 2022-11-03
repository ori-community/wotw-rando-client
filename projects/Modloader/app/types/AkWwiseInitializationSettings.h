#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings {
        inline app::AkWwiseInitializationSettings__Class** type_info = (app::AkWwiseInitializationSettings__Class**)(modloader::win::memory::resolve_rva(0x0470EB70));
        inline app::AkWwiseInitializationSettings__Class* get_class() {
            return il2cpp::get_class<app::AkWwiseInitializationSettings__Class>(type_info, "", "AkWwiseInitializationSettings");
        }
        inline app::AkWwiseInitializationSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings
} // namespace app::classes::types
