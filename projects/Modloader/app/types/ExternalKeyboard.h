#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExternalKeyboard__Class.h>
#include <Modloader/app/structs/ExternalKeyboard.h>

namespace app::classes::types {
    namespace ExternalKeyboard {
        namespace {
            inline app::ExternalKeyboard__Class* type_info_ref = nullptr;
        }
        inline app::ExternalKeyboard__Class** type_info = &type_info_ref;
        inline app::ExternalKeyboard__Class* get_class() {
            return il2cpp::get_class<app::ExternalKeyboard__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard");
        }
        inline app::ExternalKeyboard* create() {
            return il2cpp::create_object<app::ExternalKeyboard>(get_class());
        }
    } // namespace ExternalKeyboard
} // namespace app::classes::types
