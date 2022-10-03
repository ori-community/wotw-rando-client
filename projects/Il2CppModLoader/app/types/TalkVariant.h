#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TalkVariant {
        namespace {
            app::TalkVariant__Class* type_info_ref = nullptr;
        }
        app::TalkVariant__Class** type_info = &type_info_ref;
        inline app::TalkVariant__Class* get_class() {
            return il2cpp::get_class<app::TalkVariant__Class>(type_info, "", "TalkVariant");
        }
        inline app::TalkVariant* create() {
            return il2cpp::create_object<app::TalkVariant>(get_class());
        }
    } // namespace TalkVariant
} // namespace app::classes::types
