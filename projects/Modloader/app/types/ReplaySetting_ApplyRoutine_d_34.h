#pragma once
#include <Modloader/app/structs/ReplaySetting_ApplyRoutine_d_34.h>
#include <Modloader/app/structs/ReplaySetting_ApplyRoutine_d_34__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplaySetting_ApplyRoutine_d_34 {
        inline app::ReplaySetting_ApplyRoutine_d_34__Class** type_info() {
            static app::ReplaySetting_ApplyRoutine_d_34__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplaySetting_ApplyRoutine_d_34__Class**)(modloader::win::memory::resolve_rva(0x0474D9B0));
            }
            return cache;
        }
        inline app::ReplaySetting_ApplyRoutine_d_34__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplaySetting_ApplyRoutine_d_34__Class>(type_info(), "", "ReplaySetting", "<ApplyRoutine>d__34");
        }
        inline app::ReplaySetting_ApplyRoutine_d_34* create() {
            return il2cpp::create_object<app::ReplaySetting_ApplyRoutine_d_34>(get_class());
        }
    } // namespace ReplaySetting_ApplyRoutine_d_34
} // namespace app::classes::types
