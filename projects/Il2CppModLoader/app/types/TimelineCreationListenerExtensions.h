#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineCreationListenerExtensions {
        inline app::TimelineCreationListenerExtensions__Class** type_info = (app::TimelineCreationListenerExtensions__Class**)(modloader::win::memory::resolve_rva(0x0473D820));
        inline app::TimelineCreationListenerExtensions__Class* get_class() {
            return il2cpp::get_class<app::TimelineCreationListenerExtensions__Class>(type_info, "Moon.Timeline", "TimelineCreationListenerExtensions");
        }
        inline app::TimelineCreationListenerExtensions* create() {
            return il2cpp::create_object<app::TimelineCreationListenerExtensions>(get_class());
        }
    } // namespace TimelineCreationListenerExtensions
} // namespace app::classes::types
