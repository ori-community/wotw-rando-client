#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExampleZoneProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExampleZoneProcessor__Class** type_info;
        inline app::ExampleZoneProcessor__Class* get_class() {
            return il2cpp::get_class<app::ExampleZoneProcessor__Class>(type_info, "Moon.Wwise", "ExampleZoneProcessor");
        }
        inline app::ExampleZoneProcessor* create() {
            return il2cpp::create_object<app::ExampleZoneProcessor>(get_class());
        }
    } // namespace ExampleZoneProcessor
} // namespace app::classes::types
