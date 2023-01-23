#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UICharInfo__Array__Class.h>
#include <Modloader/app/structs/UICharInfo__Array.h>

namespace app::classes::types {
    namespace UICharInfo__Array {
        namespace {
            inline app::UICharInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::UICharInfo__Array__Class** type_info = &type_info_ref;
        inline app::UICharInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UICharInfo__Array__Class>(type_info, "UnityEngine", "UICharInfo[]");
        }
        inline app::UICharInfo__Array* create() {
            return il2cpp::create_object<app::UICharInfo__Array>(get_class());
        }
    } // namespace UICharInfo__Array
} // namespace app::classes::types
