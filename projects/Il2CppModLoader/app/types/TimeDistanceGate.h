#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeDistanceGate {
        inline app::TimeDistanceGate__Class** type_info = (app::TimeDistanceGate__Class**)(modloader::win::memory::resolve_rva(0x04711360));
        inline app::TimeDistanceGate__Class* get_class() {
            return il2cpp::get_class<app::TimeDistanceGate__Class>(type_info, "", "TimeDistanceGate");
        }
        inline app::TimeDistanceGate* create() {
            return il2cpp::create_object<app::TimeDistanceGate>(get_class());
        }
    } // namespace TimeDistanceGate
} // namespace app::classes::types
