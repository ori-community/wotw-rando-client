#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset__Class.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset {
        namespace {
            inline app::KeybindingCommandMapAsset__Class* type_info_ref = nullptr;
        }
        inline app::KeybindingCommandMapAsset__Class** type_info = &type_info_ref;
        inline app::KeybindingCommandMapAsset__Class* get_class() {
            return il2cpp::get_class<app::KeybindingCommandMapAsset__Class>(type_info, "", "KeybindingCommandMapAsset");
        }
        inline app::KeybindingCommandMapAsset* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset>(get_class());
        }
    } // namespace KeybindingCommandMapAsset
} // namespace app::classes::types
