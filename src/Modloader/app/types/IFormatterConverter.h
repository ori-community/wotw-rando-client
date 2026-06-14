#pragma once
#include <Modloader/app/structs/IFormatterConverter.h>
#include <Modloader/app/structs/IFormatterConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFormatterConverter {
        inline app::IFormatterConverter__Class** type_info() {
            static app::IFormatterConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFormatterConverter__Class**)(modloader::win::memory::resolve_rva(0x04745480));
            }
            return cache;
        }
        inline app::IFormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::IFormatterConverter__Class>(type_info(), "System.Runtime.Serialization", "IFormatterConverter");
        }
    } // namespace IFormatterConverter
} // namespace app::classes::types
