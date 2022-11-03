#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DictionarySectionHandler {
        namespace {
            inline app::DictionarySectionHandler__Class* type_info_ref = nullptr;
        }
        inline app::DictionarySectionHandler__Class** type_info = &type_info_ref;
        inline app::DictionarySectionHandler__Class* get_class() {
            return il2cpp::get_class<app::DictionarySectionHandler__Class>(type_info, "System.Configuration", "DictionarySectionHandler");
        }
        inline app::DictionarySectionHandler* create() {
            return il2cpp::create_object<app::DictionarySectionHandler>(get_class());
        }
    } // namespace DictionarySectionHandler
} // namespace app::classes::types
