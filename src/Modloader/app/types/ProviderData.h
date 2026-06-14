#pragma once
#include <Modloader/app/structs/ProviderData.h>
#include <Modloader/app/structs/ProviderData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProviderData {
        inline app::ProviderData__Class** type_info() {
            static app::ProviderData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProviderData__Class**)(modloader::win::memory::resolve_rva(0x0478F0A0));
            }
            return cache;
        }
        inline app::ProviderData__Class* get_class() {
            return il2cpp::get_class<app::ProviderData__Class>(type_info(), "System.Runtime.Remoting", "ProviderData");
        }
        inline app::ProviderData* create() {
            return il2cpp::create_object<app::ProviderData>(get_class());
        }
    } // namespace ProviderData
} // namespace app::classes::types
