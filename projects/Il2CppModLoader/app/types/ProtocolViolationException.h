#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProtocolViolationException {
        inline app::ProtocolViolationException__Class** type_info = (app::ProtocolViolationException__Class**)(modloader::win::memory::resolve_rva(0x04718030));
        inline app::ProtocolViolationException__Class* get_class() {
            return il2cpp::get_class<app::ProtocolViolationException__Class>(type_info, "System.Net", "ProtocolViolationException");
        }
        inline app::ProtocolViolationException* create() {
            return il2cpp::create_object<app::ProtocolViolationException>(get_class());
        }
    } // namespace ProtocolViolationException
} // namespace app::classes::types
