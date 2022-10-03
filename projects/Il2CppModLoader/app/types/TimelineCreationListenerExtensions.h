#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineCreationListenerExtensions {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineCreationListenerExtensions__Class** type_info;
        inline app::TimelineCreationListenerExtensions__Class* get_class() {
            return il2cpp::get_class<app::TimelineCreationListenerExtensions__Class>(type_info, "Moon.Timeline", "TimelineCreationListenerExtensions");
        }
        inline app::TimelineCreationListenerExtensions* create() {
            return il2cpp::create_object<app::TimelineCreationListenerExtensions>(get_class());
        }
    } // namespace TimelineCreationListenerExtensions
} // namespace app::classes::types
