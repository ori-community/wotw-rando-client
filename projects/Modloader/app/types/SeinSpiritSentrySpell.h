#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinSpiritSentrySpell__Class.h>
#include <Modloader/app/structs/SeinSpiritSentrySpell.h>

namespace app::classes::types {
    namespace SeinSpiritSentrySpell {
        namespace {
            inline app::SeinSpiritSentrySpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritSentrySpell__Class** type_info = &type_info_ref;
        inline app::SeinSpiritSentrySpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSentrySpell__Class>(type_info, "", "SeinSpiritSentrySpell");
        }
        inline app::SeinSpiritSentrySpell* create() {
            return il2cpp::create_object<app::SeinSpiritSentrySpell>(get_class());
        }
    } // namespace SeinSpiritSentrySpell
} // namespace app::classes::types
