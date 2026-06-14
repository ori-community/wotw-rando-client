#pragma once
#include <Modloader/app/structs/BrainScript_c.h>
#include <Modloader/app/structs/BrainScript_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrainScript_c {
        inline app::BrainScript_c__Class** type_info() {
            static app::BrainScript_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrainScript_c__Class**)(modloader::win::memory::resolve_rva(0x0476F400));
            }
            return cache;
        }
        inline app::BrainScript_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BrainScript_c__Class>(type_info(), "", "BrainScript", "<>c");
        }
        inline app::BrainScript_c* create() {
            return il2cpp::create_object<app::BrainScript_c>(get_class());
        }
    } // namespace BrainScript_c
} // namespace app::classes::types
