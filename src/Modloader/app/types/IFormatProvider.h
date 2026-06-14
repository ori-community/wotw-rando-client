#pragma once
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/IFormatProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFormatProvider {
        inline app::IFormatProvider__Class** type_info() {
            static app::IFormatProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IFormatProvider__Class**)(modloader::win::memory::resolve_rva(0x0477AFC8));
            }
            return cache;
        }
        inline app::IFormatProvider__Class* get_class() {
            return il2cpp::get_class<app::IFormatProvider__Class>(type_info(), "System", "IFormatProvider");
        }
    } // namespace IFormatProvider
} // namespace app::classes::types
