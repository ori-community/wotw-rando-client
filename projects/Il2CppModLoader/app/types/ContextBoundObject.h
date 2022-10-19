#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
