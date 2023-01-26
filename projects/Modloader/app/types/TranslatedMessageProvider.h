#pragma once
#include <Modloader/app/structs/TranslatedMessageProvider.h>
#include <Modloader/app/structs/TranslatedMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TranslatedMessageProvider {
        inline app::TranslatedMessageProvider__Class** type_info() {
            static app::TranslatedMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TranslatedMessageProvider__Class**)(modloader::win::memory::resolve_rva(0x0474F940));
            }
            return cache;
        }
        inline app::TranslatedMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::TranslatedMessageProvider__Class>(type_info(), "", "TranslatedMessageProvider");
        }
        inline app::TranslatedMessageProvider* create() {
            return il2cpp::create_object<app::TranslatedMessageProvider>(get_class());
        }
    } // namespace TranslatedMessageProvider
} // namespace app::classes::types
