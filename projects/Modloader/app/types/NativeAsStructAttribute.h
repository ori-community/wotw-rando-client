#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeAsStructAttribute__Class.h>
#include <Modloader/app/structs/NativeAsStructAttribute.h>

namespace app::classes::types {
    namespace NativeAsStructAttribute {
        namespace {
            inline app::NativeAsStructAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeAsStructAttribute__Class** type_info = &type_info_ref;
        inline app::NativeAsStructAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeAsStructAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeAsStructAttribute");
        }
        inline app::NativeAsStructAttribute* create() {
            return il2cpp::create_object<app::NativeAsStructAttribute>(get_class());
        }
    } // namespace NativeAsStructAttribute
} // namespace app::classes::types
