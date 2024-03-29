#pragma once
#include <Modloader/app/structs/TurbulenceTranslationModifier.h>
#include <Modloader/app/structs/TurbulenceTranslationModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceTranslationModifier {
        inline app::TurbulenceTranslationModifier__Class** type_info() {
            static app::TurbulenceTranslationModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TurbulenceTranslationModifier__Class**)(modloader::win::memory::resolve_rva(0x04702820));
            }
            return cache;
        }
        inline app::TurbulenceTranslationModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTranslationModifier__Class>(type_info(), "", "TurbulenceTranslationModifier");
        }
        inline app::TurbulenceTranslationModifier* create() {
            return il2cpp::create_object<app::TurbulenceTranslationModifier>(get_class());
        }
    } // namespace TurbulenceTranslationModifier
} // namespace app::classes::types
