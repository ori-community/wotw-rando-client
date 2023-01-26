#pragma once
#include <Modloader/app/structs/IFormattable.h>
#include <Modloader/app/structs/IFormattable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFormattable {
        inline app::IFormattable__Class** type_info() {
            static app::IFormattable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFormattable__Class**)(modloader::win::memory::resolve_rva(0x04761DD0));
            }
            return cache;
        }
        inline app::IFormattable__Class* get_class() {
            return il2cpp::get_class<app::IFormattable__Class>(type_info(), "System", "IFormattable");
        }
    } // namespace IFormattable
} // namespace app::classes::types
