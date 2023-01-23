#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeSetThreadIndexAttribute__Class.h>
#include <Modloader/app/structs/NativeSetThreadIndexAttribute.h>

namespace app::classes::types {
    namespace NativeSetThreadIndexAttribute {
        namespace {
            inline app::NativeSetThreadIndexAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeSetThreadIndexAttribute__Class** type_info = &type_info_ref;
        inline app::NativeSetThreadIndexAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeSetThreadIndexAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeSetThreadIndexAttribute");
        }
        inline app::NativeSetThreadIndexAttribute* create() {
            return il2cpp::create_object<app::NativeSetThreadIndexAttribute>(get_class());
        }
    } // namespace NativeSetThreadIndexAttribute
} // namespace app::classes::types
