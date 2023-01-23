#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TalkVariant__Class.h>
#include <Modloader/app/structs/TalkVariant.h>

namespace app::classes::types {
    namespace TalkVariant {
        namespace {
            inline app::TalkVariant__Class* type_info_ref = nullptr;
        }
        inline app::TalkVariant__Class** type_info = &type_info_ref;
        inline app::TalkVariant__Class* get_class() {
            return il2cpp::get_class<app::TalkVariant__Class>(type_info, "", "TalkVariant");
        }
        inline app::TalkVariant* create() {
            return il2cpp::create_object<app::TalkVariant>(get_class());
        }
    } // namespace TalkVariant
} // namespace app::classes::types
