#pragma once
#include <Modloader/app/structs/MoonReferenceValidator.h>
#include <Modloader/app/structs/MoonReferenceValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonReferenceValidator {
        inline app::MoonReferenceValidator__Class** type_info() {
            static app::MoonReferenceValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonReferenceValidator__Class**)(modloader::win::memory::resolve_rva(0x0477B238));
            }
            return cache;
        }
        inline app::MoonReferenceValidator__Class* get_class() {
            return il2cpp::get_class<app::MoonReferenceValidator__Class>(type_info(), "Moon", "MoonReferenceValidator");
        }
        inline app::MoonReferenceValidator* create() {
            return il2cpp::create_object<app::MoonReferenceValidator>(get_class());
        }
    } // namespace MoonReferenceValidator
} // namespace app::classes::types
