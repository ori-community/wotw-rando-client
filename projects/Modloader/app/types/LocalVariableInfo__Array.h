#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocalVariableInfo__Array__Class.h>
#include <Modloader/app/structs/LocalVariableInfo__Array.h>

namespace app::classes::types {
    namespace LocalVariableInfo__Array {
        namespace {
            inline app::LocalVariableInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::LocalVariableInfo__Array__Class** type_info = &type_info_ref;
        inline app::LocalVariableInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalVariableInfo__Array__Class>(type_info, "System.Reflection", "LocalVariableInfo[]");
        }
        inline app::LocalVariableInfo__Array* create() {
            return il2cpp::create_object<app::LocalVariableInfo__Array>(get_class());
        }
    } // namespace LocalVariableInfo__Array
} // namespace app::classes::types
