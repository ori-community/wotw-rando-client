#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineState_c {
        inline app::TimelineState_c__Class** type_info = (app::TimelineState_c__Class**)(modloader::win::memory::resolve_rva(0x04752980));
        inline app::TimelineState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineState_c__Class>(type_info, "Moon.Timeline", "TimelineState", "<>c");
        }
        inline app::TimelineState_c* create() {
            return il2cpp::create_object<app::TimelineState_c>(get_class());
        }
    } // namespace TimelineState_c
} // namespace app::classes::types
