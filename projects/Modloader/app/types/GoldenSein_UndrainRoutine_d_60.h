#pragma once
#include <Modloader/app/structs/GoldenSein_UndrainRoutine_d_60.h>
#include <Modloader/app/structs/GoldenSein_UndrainRoutine_d_60__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoldenSein_UndrainRoutine_d_60 {
        inline app::GoldenSein_UndrainRoutine_d_60__Class** type_info() {
            static app::GoldenSein_UndrainRoutine_d_60__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GoldenSein_UndrainRoutine_d_60__Class**)(modloader::win::memory::resolve_rva(0x0475B110));
            }
            return cache;
        }
        inline app::GoldenSein_UndrainRoutine_d_60__Class* get_class() {
            return il2cpp::get_nested_class<app::GoldenSein_UndrainRoutine_d_60__Class>(type_info(), "", "GoldenSein", "<UndrainRoutine>d__60");
        }
        inline app::GoldenSein_UndrainRoutine_d_60* create() {
            return il2cpp::create_object<app::GoldenSein_UndrainRoutine_d_60>(get_class());
        }
    } // namespace GoldenSein_UndrainRoutine_d_60
} // namespace app::classes::types
