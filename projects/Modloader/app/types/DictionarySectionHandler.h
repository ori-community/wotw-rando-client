#pragma once
#include <Modloader/app/structs/DictionarySectionHandler.h>
#include <Modloader/app/structs/DictionarySectionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictionarySectionHandler {
        inline app::DictionarySectionHandler__Class** type_info() {
            static app::DictionarySectionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DictionarySectionHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DictionarySectionHandler__Class* get_class() {
            return il2cpp::get_class<app::DictionarySectionHandler__Class>(type_info(), "System.Configuration", "DictionarySectionHandler");
        }
        inline app::DictionarySectionHandler* create() {
            return il2cpp::create_object<app::DictionarySectionHandler>(get_class());
        }
    } // namespace DictionarySectionHandler
} // namespace app::classes::types
