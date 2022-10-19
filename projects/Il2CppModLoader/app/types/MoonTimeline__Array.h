#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTimeline__Array {
        inline app::MoonTimeline__Array__Class** type_info = (app::MoonTimeline__Array__Class**)(modloader::win::memory::resolve_rva(0x04749778));
        inline app::MoonTimeline__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTimeline__Array__Class>(type_info, "Moon.Timeline", "MoonTimeline[]");
        }
        inline app::MoonTimeline__Array* create() {
            return il2cpp::create_object<app::MoonTimeline__Array>(get_class());
        }
    } // namespace MoonTimeline__Array
} // namespace app::classes::types
