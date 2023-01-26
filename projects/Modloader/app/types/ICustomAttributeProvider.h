#pragma once
#include <Modloader/app/structs/ICustomAttributeProvider.h>
#include <Modloader/app/structs/ICustomAttributeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICustomAttributeProvider {
        inline app::ICustomAttributeProvider__Class** type_info() {
            static app::ICustomAttributeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICustomAttributeProvider__Class**)(modloader::win::memory::resolve_rva(0x0470F310));
            }
            return cache;
        }
        inline app::ICustomAttributeProvider__Class* get_class() {
            return il2cpp::get_class<app::ICustomAttributeProvider__Class>(type_info(), "System.Reflection", "ICustomAttributeProvider");
        }
    } // namespace ICustomAttributeProvider
} // namespace app::classes::types
