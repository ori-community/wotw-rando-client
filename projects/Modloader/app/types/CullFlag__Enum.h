#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CullFlag__Enum {
        namespace {
            inline app::CullFlag__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CullFlag__Enum__Class** type_info = &type_info_ref;
        inline app::CullFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::CullFlag__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "CullFlag");
        }
        inline app::CullFlag__Enum* create() {
            return il2cpp::create_object<app::CullFlag__Enum>(get_class());
        }
    } // namespace CullFlag__Enum
} // namespace app::classes::types
