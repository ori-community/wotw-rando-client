#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UILineInfo__Array__Class.h>
#include <Modloader/app/structs/UILineInfo__Array.h>

namespace app::classes::types {
    namespace UILineInfo__Array {
        namespace {
            inline app::UILineInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::UILineInfo__Array__Class** type_info = &type_info_ref;
        inline app::UILineInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::UILineInfo__Array__Class>(type_info, "UnityEngine", "UILineInfo[]");
        }
        inline app::UILineInfo__Array* create() {
            return il2cpp::create_object<app::UILineInfo__Array>(get_class());
        }
    } // namespace UILineInfo__Array
} // namespace app::classes::types
