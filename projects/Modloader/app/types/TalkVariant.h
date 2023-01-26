#pragma once
#include <Modloader/app/structs/TalkVariant.h>
#include <Modloader/app/structs/TalkVariant__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TalkVariant {
        inline app::TalkVariant__Class** type_info() {
            static app::TalkVariant__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TalkVariant__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TalkVariant__Class* get_class() {
            return il2cpp::get_class<app::TalkVariant__Class>(type_info(), "", "TalkVariant");
        }
        inline app::TalkVariant* create() {
            return il2cpp::create_object<app::TalkVariant>(get_class());
        }
    } // namespace TalkVariant
} // namespace app::classes::types
