#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterResult_1__Array__Class.h>
#include <Modloader/app/structs/CharacterResult_1__Array.h>

namespace app::classes::types {
    namespace CharacterResult_1__Array {
        namespace {
            inline app::CharacterResult_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::CharacterResult_1__Array__Class** type_info = &type_info_ref;
        inline app::CharacterResult_1__Array__Class* get_class() {
            return il2cpp::get_class<app::CharacterResult_1__Array__Class>(type_info, "PlayFab.ServerModels", "CharacterResult[]");
        }
        inline app::CharacterResult_1__Array* create() {
            return il2cpp::create_object<app::CharacterResult_1__Array>(get_class());
        }
    } // namespace CharacterResult_1__Array
} // namespace app::classes::types
