#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContextBoundObject__Class.h>
#include <Modloader/app/structs/ContextBoundObject.h>

namespace app::classes::types {
    namespace ContextBoundObject {
        namespace {
            inline app::ContextBoundObject__Class* type_info_ref = nullptr;
        }
        inline app::ContextBoundObject__Class** type_info = &type_info_ref;
        inline app::ContextBoundObject__Class* get_class() {
            return il2cpp::get_class<app::ContextBoundObject__Class>(type_info, "System", "ContextBoundObject");
        }
        inline app::ContextBoundObject* create() {
            return il2cpp::create_object<app::ContextBoundObject>(get_class());
        }
    } // namespace ContextBoundObject
} // namespace app::classes::types
