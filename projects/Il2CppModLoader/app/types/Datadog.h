#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datadog {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datadog__Class** type_info;
        inline app::Datadog__Class* get_class() {
            return il2cpp::get_class<app::Datadog__Class>(type_info, "", "Datadog");
        }
        inline app::Datadog* create() {
            return il2cpp::create_object<app::Datadog>(get_class());
        }
    } // namespace Datadog
} // namespace app::classes::types
