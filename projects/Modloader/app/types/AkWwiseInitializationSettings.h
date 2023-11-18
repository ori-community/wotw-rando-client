#pragma once
#include <Modloader/app/structs/AkWwiseInitializationSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings {
        inline app::AkWwiseInitializationSettings__Class** type_info() {
            static app::AkWwiseInitializationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkWwiseInitializationSettings__Class**)(modloader::win::memory::resolve_rva(0x0470EB70));
            }
            return cache;
        }
        inline app::AkWwiseInitializationSettings__Class* get_class() {
            return il2cpp::get_class<app::AkWwiseInitializationSettings__Class>(type_info(), "", "AkWwiseInitializationSettings");
        }
        inline app::AkWwiseInitializationSettings* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings>(get_class());
        }
    } // namespace AkWwiseInitializationSettings
} // namespace app::classes::types
