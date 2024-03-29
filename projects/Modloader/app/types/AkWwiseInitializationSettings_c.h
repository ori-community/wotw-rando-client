#pragma once
#include <Modloader/app/structs/AkWwiseInitializationSettings_c.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkWwiseInitializationSettings_c {
        inline app::AkWwiseInitializationSettings_c__Class** type_info() {
            static app::AkWwiseInitializationSettings_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkWwiseInitializationSettings_c__Class**)(modloader::win::memory::resolve_rva(0x04784A30));
            }
            return cache;
        }
        inline app::AkWwiseInitializationSettings_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWwiseInitializationSettings_c__Class>(type_info(), "", "AkWwiseInitializationSettings", "<>c");
        }
        inline app::AkWwiseInitializationSettings_c* create() {
            return il2cpp::create_object<app::AkWwiseInitializationSettings_c>(get_class());
        }
    } // namespace AkWwiseInitializationSettings_c
} // namespace app::classes::types
