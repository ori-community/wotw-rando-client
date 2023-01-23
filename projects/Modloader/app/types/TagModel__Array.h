#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TagModel__Array__Class.h>
#include <Modloader/app/structs/TagModel__Array.h>

namespace app::classes::types {
    namespace TagModel__Array {
        namespace {
            inline app::TagModel__Array__Class* type_info_ref = nullptr;
        }
        inline app::TagModel__Array__Class** type_info = &type_info_ref;
        inline app::TagModel__Array__Class* get_class() {
            return il2cpp::get_class<app::TagModel__Array__Class>(type_info, "PlayFab.ClientModels", "TagModel[]");
        }
        inline app::TagModel__Array* create() {
            return il2cpp::create_object<app::TagModel__Array>(get_class());
        }
    } // namespace TagModel__Array
} // namespace app::classes::types
