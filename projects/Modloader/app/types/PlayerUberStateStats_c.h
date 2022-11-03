#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateStats_c {
        inline app::PlayerUberStateStats_c__Class** type_info = (app::PlayerUberStateStats_c__Class**)(modloader::win::memory::resolve_rva(0x047140B8));
        inline app::PlayerUberStateStats_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateStats_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateStats", "<>c");
        }
        inline app::PlayerUberStateStats_c* create() {
            return il2cpp::create_object<app::PlayerUberStateStats_c>(get_class());
        }
    } // namespace PlayerUberStateStats_c
} // namespace app::classes::types
