#pragma once
#include <Modloader/app/structs/IConvertible.h>
#include <Modloader/app/structs/IConvertible__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IConvertible {
        inline app::IConvertible__Class** type_info() {
            static app::IConvertible__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IConvertible__Class**)(modloader::win::memory::resolve_rva(0x0470FB60));
            }
            return cache;
        }
        inline app::IConvertible__Class* get_class() {
            return il2cpp::get_class<app::IConvertible__Class>(type_info(), "System", "IConvertible");
        }
    } // namespace IConvertible
} // namespace app::classes::types
