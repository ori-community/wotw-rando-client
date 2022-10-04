#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITimelineContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITimelineContext__Class** type_info;
        inline app::ITimelineContext__Class* get_class() {
            return il2cpp::get_class<app::ITimelineContext__Class>(type_info, "Moon.Timeline", "ITimelineContext");
        }
        inline app::ITimelineContext* create() {
            return il2cpp::create_object<app::ITimelineContext>(get_class());
        }
    } // namespace ITimelineContext
} // namespace app::classes::types
