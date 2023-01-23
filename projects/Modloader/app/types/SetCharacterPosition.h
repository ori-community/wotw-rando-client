#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetCharacterPosition__Class.h>
#include <Modloader/app/structs/SetCharacterPosition.h>

namespace app::classes::types {
    namespace SetCharacterPosition {
        namespace {
            inline app::SetCharacterPosition__Class* type_info_ref = nullptr;
        }
        inline app::SetCharacterPosition__Class** type_info = &type_info_ref;
        inline app::SetCharacterPosition__Class* get_class() {
            return il2cpp::get_class<app::SetCharacterPosition__Class>(type_info, "", "SetCharacterPosition");
        }
        inline app::SetCharacterPosition* create() {
            return il2cpp::create_object<app::SetCharacterPosition>(get_class());
        }
    } // namespace SetCharacterPosition
} // namespace app::classes::types
