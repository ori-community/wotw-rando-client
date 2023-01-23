#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPlayFabPlugin__Array__Class.h>
#include <Modloader/app/structs/IPlayFabPlugin__Array.h>

namespace app::classes::types {
    namespace IPlayFabPlugin__Array {
        namespace {
            inline app::IPlayFabPlugin__Array__Class* type_info_ref = nullptr;
        }
        inline app::IPlayFabPlugin__Array__Class** type_info = &type_info_ref;
        inline app::IPlayFabPlugin__Array__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabPlugin__Array__Class>(type_info, "PlayFab", "IPlayFabPlugin[]");
        }
        inline app::IPlayFabPlugin__Array* create() {
            return il2cpp::create_object<app::IPlayFabPlugin__Array>(get_class());
        }
    } // namespace IPlayFabPlugin__Array
} // namespace app::classes::types
