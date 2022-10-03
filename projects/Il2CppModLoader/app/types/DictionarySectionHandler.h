#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DictionarySectionHandler {
        namespace {
            app::DictionarySectionHandler__Class* type_info_ref = nullptr;
        }
        app::DictionarySectionHandler__Class** type_info = &type_info_ref;
        inline app::DictionarySectionHandler__Class* get_class() {
            return il2cpp::get_class<app::DictionarySectionHandler__Class>(type_info, "System.Configuration", "DictionarySectionHandler");
        }
        inline app::DictionarySectionHandler* create() {
            return il2cpp::create_object<app::DictionarySectionHandler>(get_class());
        }
    } // namespace DictionarySectionHandler
} // namespace app::classes::types
