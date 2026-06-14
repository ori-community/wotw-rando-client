#pragma once
#include <Modloader/app/structs/IHashCodeProvider.h>
#include <Modloader/app/structs/IHashCodeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IHashCodeProvider {
        inline app::IHashCodeProvider__Class** type_info() {
            static app::IHashCodeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IHashCodeProvider__Class**)(modloader::win::memory::resolve_rva(0x04709EE0));
            }
            return cache;
        }
        inline app::IHashCodeProvider__Class* get_class() {
            return il2cpp::get_class<app::IHashCodeProvider__Class>(type_info(), "System.Collections", "IHashCodeProvider");
        }
    } // namespace IHashCodeProvider
} // namespace app::classes::types
