#pragma once
#include <Modloader/app/structs/SeinStomp_States.h>
#include <Modloader/app/structs/SeinStomp_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinStomp_States {
        inline app::SeinStomp_States__Class** type_info() {
            static app::SeinStomp_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinStomp_States__Class**)(modloader::win::memory::resolve_rva(0x047556E0));
            }
            return cache;
        }
        inline app::SeinStomp_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStomp_States__Class>(type_info(), "", "SeinStomp", "States");
        }
        inline app::SeinStomp_States* create() {
            return il2cpp::create_object<app::SeinStomp_States>(get_class());
        }
    } // namespace SeinStomp_States
} // namespace app::classes::types
