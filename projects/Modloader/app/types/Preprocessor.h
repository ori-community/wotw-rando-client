#pragma once
#include <Modloader/app/structs/Preprocessor.h>
#include <Modloader/app/structs/Preprocessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Preprocessor {
        inline app::Preprocessor__Class** type_info() {
            static app::Preprocessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Preprocessor__Class**)(modloader::win::memory::resolve_rva(0x047783D0));
            }
            return cache;
        }
        inline app::Preprocessor__Class* get_class() {
            return il2cpp::get_class<app::Preprocessor__Class>(type_info(), "System.Xml.Schema", "Preprocessor");
        }
        inline app::Preprocessor* create() {
            return il2cpp::create_object<app::Preprocessor>(get_class());
        }
    } // namespace Preprocessor
} // namespace app::classes::types
