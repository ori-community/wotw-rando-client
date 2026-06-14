#pragma once
#include <Modloader/app/structs/SeinSpiritSentrySpell.h>
#include <Modloader/app/structs/SeinSpiritSentrySpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSentrySpell {
        inline app::SeinSpiritSentrySpell__Class** type_info() {
            static app::SeinSpiritSentrySpell__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritSentrySpell__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritSentrySpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSentrySpell__Class>(type_info(), "", "SeinSpiritSentrySpell");
        }
        inline app::SeinSpiritSentrySpell* create() {
            return il2cpp::create_object<app::SeinSpiritSentrySpell>(get_class());
        }
    } // namespace SeinSpiritSentrySpell
} // namespace app::classes::types
