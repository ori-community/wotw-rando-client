#pragma once
#include <Modloader/app/structs/SeinEvents_AbilityEvents_c.h>
#include <Modloader/app/structs/SeinEvents_AbilityEvents_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEvents_AbilityEvents_c {
        inline app::SeinEvents_AbilityEvents_c__Class** type_info() {
            static app::SeinEvents_AbilityEvents_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinEvents_AbilityEvents_c__Class**)(modloader::win::memory::resolve_rva(0x04791340));
            }
            return cache;
        }
        inline app::SeinEvents_AbilityEvents_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEvents_AbilityEvents_c__Class>(type_info(), "Game", "SeinEvents+AbilityEvents", "<>c");
        }
        inline app::SeinEvents_AbilityEvents_c* create() {
            return il2cpp::create_object<app::SeinEvents_AbilityEvents_c>(get_class());
        }
    } // namespace SeinEvents_AbilityEvents_c
} // namespace app::classes::types
