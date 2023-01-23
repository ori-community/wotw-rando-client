#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PSNAccountPlayFabIdPair__Array__Class.h>
#include <Modloader/app/structs/PSNAccountPlayFabIdPair__Array.h>

namespace app::classes::types {
    namespace PSNAccountPlayFabIdPair__Array {
        namespace {
            inline app::PSNAccountPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::PSNAccountPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::PSNAccountPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::PSNAccountPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "PSNAccountPlayFabIdPair[]");
        }
        inline app::PSNAccountPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::PSNAccountPlayFabIdPair__Array>(get_class());
        }
    } // namespace PSNAccountPlayFabIdPair__Array
} // namespace app::classes::types
