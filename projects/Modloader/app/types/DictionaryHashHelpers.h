#pragma once
#include <Modloader/app/structs/DictionaryHashHelpers.h>
#include <Modloader/app/structs/DictionaryHashHelpers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DictionaryHashHelpers {
        inline app::DictionaryHashHelpers__Class** type_info() {
            static app::DictionaryHashHelpers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DictionaryHashHelpers__Class**)(modloader::win::memory::resolve_rva(0x0475CEB8));
            }
            return cache;
        }
        inline app::DictionaryHashHelpers__Class* get_class() {
            return il2cpp::get_class<app::DictionaryHashHelpers__Class>(type_info(), "System.Collections.Generic", "DictionaryHashHelpers");
        }
        inline app::DictionaryHashHelpers* create() {
            return il2cpp::create_object<app::DictionaryHashHelpers>(get_class());
        }
    } // namespace DictionaryHashHelpers
} // namespace app::classes::types
