#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IValueProvider {
        inline app::IValueProvider__Class** type_info = (app::IValueProvider__Class**)(modloader::win::memory::resolve_rva(0x047199C0));
        inline app::IValueProvider__Class* get_class() {
            return il2cpp::get_class<app::IValueProvider__Class>(type_info, "Newtonsoft.Json.Serialization", "IValueProvider");
        }
    } // namespace IValueProvider
} // namespace app::classes::types
