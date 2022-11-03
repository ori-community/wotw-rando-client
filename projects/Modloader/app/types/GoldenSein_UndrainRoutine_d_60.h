#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GoldenSein_UndrainRoutine_d_60 {
        inline app::GoldenSein_UndrainRoutine_d_60__Class** type_info = (app::GoldenSein_UndrainRoutine_d_60__Class**)(modloader::win::memory::resolve_rva(0x0475B110));
        inline app::GoldenSein_UndrainRoutine_d_60__Class* get_class() {
            return il2cpp::get_nested_class<app::GoldenSein_UndrainRoutine_d_60__Class>(type_info, "", "GoldenSein", "<UndrainRoutine>d__60");
        }
        inline app::GoldenSein_UndrainRoutine_d_60* create() {
            return il2cpp::create_object<app::GoldenSein_UndrainRoutine_d_60>(get_class());
        }
    } // namespace GoldenSein_UndrainRoutine_d_60
} // namespace app::classes::types
