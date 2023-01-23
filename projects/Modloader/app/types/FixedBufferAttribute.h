#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixedBufferAttribute__Class.h>
#include <Modloader/app/structs/FixedBufferAttribute.h>

namespace app::classes::types {
    namespace FixedBufferAttribute {
        namespace {
            inline app::FixedBufferAttribute__Class* type_info_ref = nullptr;
        }
        inline app::FixedBufferAttribute__Class** type_info = &type_info_ref;
        inline app::FixedBufferAttribute__Class* get_class() {
            return il2cpp::get_class<app::FixedBufferAttribute__Class>(type_info, "System.Runtime.CompilerServices", "FixedBufferAttribute");
        }
        inline app::FixedBufferAttribute* create() {
            return il2cpp::create_object<app::FixedBufferAttribute>(get_class());
        }
    } // namespace FixedBufferAttribute
} // namespace app::classes::types
