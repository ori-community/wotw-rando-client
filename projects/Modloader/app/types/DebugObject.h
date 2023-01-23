#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugObject__Class.h>
#include <Modloader/app/structs/DebugObject.h>

namespace app::classes::types {
    namespace DebugObject {
        namespace {
            inline app::DebugObject__Class* type_info_ref = nullptr;
        }
        inline app::DebugObject__Class** type_info = &type_info_ref;
        inline app::DebugObject__Class* get_class() {
            return il2cpp::get_class<app::DebugObject__Class>(type_info, "", "DebugObject");
        }
        inline app::DebugObject* create() {
            return il2cpp::create_object<app::DebugObject>(get_class());
        }
    } // namespace DebugObject
} // namespace app::classes::types
