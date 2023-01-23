#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDebugMenuItem__Array__Class.h>
#include <Modloader/app/structs/IDebugMenuItem__Array.h>

namespace app::classes::types {
    namespace IDebugMenuItem__Array {
        namespace {
            inline app::IDebugMenuItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDebugMenuItem__Array__Class** type_info = &type_info_ref;
        inline app::IDebugMenuItem__Array__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuItem__Array__Class>(type_info, "", "IDebugMenuItem[]");
        }
        inline app::IDebugMenuItem__Array* create() {
            return il2cpp::create_object<app::IDebugMenuItem__Array>(get_class());
        }
    } // namespace IDebugMenuItem__Array
} // namespace app::classes::types
