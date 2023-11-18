#pragma once
#include <Modloader/app/structs/ContentValidator.h>
#include <Modloader/app/structs/ContentValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContentValidator {
        inline app::ContentValidator__Class** type_info() {
            static app::ContentValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContentValidator__Class**)(modloader::win::memory::resolve_rva(0x0470AE38));
            }
            return cache;
        }
        inline app::ContentValidator__Class* get_class() {
            return il2cpp::get_class<app::ContentValidator__Class>(type_info(), "System.Xml.Schema", "ContentValidator");
        }
        inline app::ContentValidator* create() {
            return il2cpp::create_object<app::ContentValidator>(get_class());
        }
    } // namespace ContentValidator
} // namespace app::classes::types
