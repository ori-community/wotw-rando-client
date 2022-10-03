#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTimeline {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTimeline__Class** type_info;
        inline app::MoonTimeline__Class* get_class() {
            return il2cpp::get_class<app::MoonTimeline__Class>(type_info, "Moon.Timeline", "MoonTimeline");
        }
        inline app::MoonTimeline* create() {
            return il2cpp::create_object<app::MoonTimeline>(get_class());
        }
        inline app::MoonTimeline__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTimeline__Array>(get_class(), size);
        }
    } // namespace MoonTimeline
} // namespace app::classes::types
