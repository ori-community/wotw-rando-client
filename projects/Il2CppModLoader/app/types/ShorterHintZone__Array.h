#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShorterHintZone__Array {
        namespace {
            inline app::ShorterHintZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::ShorterHintZone__Array__Class** type_info = &type_info_ref;
        inline app::ShorterHintZone__Array__Class* get_class() {
            return il2cpp::get_class<app::ShorterHintZone__Array__Class>(type_info, "", "ShorterHintZone[]");
        }
        inline app::ShorterHintZone__Array* create() {
            return il2cpp::create_object<app::ShorterHintZone__Array>(get_class());
        }
    } // namespace ShorterHintZone__Array
} // namespace app::classes::types
