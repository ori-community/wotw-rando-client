#pragma once
#include <Modloader/app/structs/ProtocolViolationException.h>
#include <Modloader/app/structs/ProtocolViolationException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProtocolViolationException {
        inline app::ProtocolViolationException__Class** type_info() {
            static app::ProtocolViolationException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProtocolViolationException__Class**)(modloader::win::memory::resolve_rva(0x04718030));
            }
            return cache;
        }
        inline app::ProtocolViolationException__Class* get_class() {
            return il2cpp::get_class<app::ProtocolViolationException__Class>(type_info(), "System.Net", "ProtocolViolationException");
        }
        inline app::ProtocolViolationException* create() {
            return il2cpp::create_object<app::ProtocolViolationException>(get_class());
        }
    } // namespace ProtocolViolationException
} // namespace app::classes::types
