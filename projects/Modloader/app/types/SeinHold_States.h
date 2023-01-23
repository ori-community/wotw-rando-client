#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinHold_States__Class.h>
#include <Modloader/app/structs/SeinHold_States.h>

namespace app::classes::types {
    namespace SeinHold_States {
        inline app::SeinHold_States__Class** type_info = (app::SeinHold_States__Class**)(modloader::win::memory::resolve_rva(0x0472FC68));
        inline app::SeinHold_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinHold_States__Class>(type_info, "", "SeinHold", "States");
        }
        inline app::SeinHold_States* create() {
            return il2cpp::create_object<app::SeinHold_States>(get_class());
        }
    } // namespace SeinHold_States
} // namespace app::classes::types
