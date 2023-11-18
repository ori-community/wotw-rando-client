#pragma once
#include <Modloader/app/structs/IValueProvider.h>
#include <Modloader/app/structs/IValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IValueProvider {
        inline app::IValueProvider__Class** type_info() {
            static app::IValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IValueProvider__Class**)(modloader::win::memory::resolve_rva(0x047199C0));
            }
            return cache;
        }
        inline app::IValueProvider__Class* get_class() {
            return il2cpp::get_class<app::IValueProvider__Class>(type_info(), "Newtonsoft.Json.Serialization", "IValueProvider");
        }
    } // namespace IValueProvider
} // namespace app::classes::types
