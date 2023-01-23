#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScrollRect__Class.h>
#include <Modloader/app/structs/ScrollRect.h>

namespace app::classes::types {
    namespace ScrollRect {
        namespace {
            inline app::ScrollRect__Class* type_info_ref = nullptr;
        }
        inline app::ScrollRect__Class** type_info = &type_info_ref;
        inline app::ScrollRect__Class* get_class() {
            return il2cpp::get_class<app::ScrollRect__Class>(type_info, "UnityEngine.UI", "ScrollRect");
        }
        inline app::ScrollRect* create() {
            return il2cpp::create_object<app::ScrollRect>(get_class());
        }
    } // namespace ScrollRect
} // namespace app::classes::types
