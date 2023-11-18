#pragma once
#include <Modloader/app/structs/CaseInsensitiveHashCodeProvider.h>
#include <Modloader/app/structs/CaseInsensitiveHashCodeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaseInsensitiveHashCodeProvider {
        inline app::CaseInsensitiveHashCodeProvider__Class** type_info() {
            static app::CaseInsensitiveHashCodeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CaseInsensitiveHashCodeProvider__Class**)(modloader::win::memory::resolve_rva(0x047541F0));
            }
            return cache;
        }
        inline app::CaseInsensitiveHashCodeProvider__Class* get_class() {
            return il2cpp::get_class<app::CaseInsensitiveHashCodeProvider__Class>(type_info(), "System.Collections", "CaseInsensitiveHashCodeProvider");
        }
        inline app::CaseInsensitiveHashCodeProvider* create() {
            return il2cpp::create_object<app::CaseInsensitiveHashCodeProvider>(get_class());
        }
    } // namespace CaseInsensitiveHashCodeProvider
} // namespace app::classes::types
