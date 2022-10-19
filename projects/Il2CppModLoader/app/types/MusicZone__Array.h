#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicZone__Array {
        namespace {
            inline app::MusicZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::MusicZone__Array__Class** type_info = &type_info_ref;
        inline app::MusicZone__Array__Class* get_class() {
            return il2cpp::get_class<app::MusicZone__Array__Class>(type_info, "", "MusicZone[]");
        }
        inline app::MusicZone__Array* create() {
            return il2cpp::create_object<app::MusicZone__Array>(get_class());
        }
    } // namespace MusicZone__Array
} // namespace app::classes::types
