#pragma once
#include <Modloader/app/structs/UnlockedCutscenes__Enum.h>
#include <Modloader/app/structs/UnlockedCutscenes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlockedCutscenes__Enum {
        inline app::UnlockedCutscenes__Enum__Class** type_info() {
            static app::UnlockedCutscenes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlockedCutscenes__Enum__Class**)(modloader::win::memory::resolve_rva(0x047290B0));
            }
            return cache;
        }
        inline app::UnlockedCutscenes__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnlockedCutscenes__Enum__Class>(type_info(), "", "UnlockedCutscenes");
        }
        inline app::UnlockedCutscenes__Enum* create() {
            return il2cpp::create_object<app::UnlockedCutscenes__Enum>(get_class());
        }
    } // namespace UnlockedCutscenes__Enum
} // namespace app::classes::types
