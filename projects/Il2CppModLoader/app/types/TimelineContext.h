#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineContext__Class** type_info;
        inline app::TimelineContext__Class* get_class() {
            return il2cpp::get_class<app::TimelineContext__Class>(type_info, "Moon.Timeline", "TimelineContext");
        }
        inline app::TimelineContext* create() {
            return il2cpp::create_object<app::TimelineContext>(get_class());
        }
    } // namespace TimelineContext
} // namespace app::classes::types
