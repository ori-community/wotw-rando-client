#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZoneProcessor {
        namespace {
            inline app::ZoneProcessor__Class* type_info_ref = nullptr;
        }
        inline app::ZoneProcessor__Class** type_info = &type_info_ref;
        inline app::ZoneProcessor__Class* get_class() {
            return il2cpp::get_class<app::ZoneProcessor__Class>(type_info, "Moon.Wwise", "ZoneProcessor");
        }
        inline app::ZoneProcessor* create() {
            return il2cpp::create_object<app::ZoneProcessor>(get_class());
        }
    } // namespace ZoneProcessor
} // namespace app::classes::types
