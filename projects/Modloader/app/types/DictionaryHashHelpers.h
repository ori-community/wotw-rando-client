#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DictionaryHashHelpers {
        inline app::DictionaryHashHelpers__Class** type_info = (app::DictionaryHashHelpers__Class**)(modloader::win::memory::resolve_rva(0x0475CEB8));
        inline app::DictionaryHashHelpers__Class* get_class() {
            return il2cpp::get_class<app::DictionaryHashHelpers__Class>(type_info, "System.Collections.Generic", "DictionaryHashHelpers");
        }
        inline app::DictionaryHashHelpers* create() {
            return il2cpp::create_object<app::DictionaryHashHelpers>(get_class());
        }
    } // namespace DictionaryHashHelpers
} // namespace app::classes::types
