#pragma once
#include <Modloader/app/structs/SeinCarry_States.h>
#include <Modloader/app/structs/SeinCarry_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinCarry_States {
        inline app::SeinCarry_States__Class** type_info() {
            static app::SeinCarry_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinCarry_States__Class**)(modloader::win::memory::resolve_rva(0x04772A20));
            }
            return cache;
        }
        inline app::SeinCarry_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinCarry_States__Class>(type_info(), "", "SeinCarry", "States");
        }
        inline app::SeinCarry_States* create() {
            return il2cpp::create_object<app::SeinCarry_States>(get_class());
        }
    } // namespace SeinCarry_States
} // namespace app::classes::types
