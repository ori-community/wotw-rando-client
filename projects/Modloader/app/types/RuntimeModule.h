#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeModule__Class.h>
#include <Modloader/app/structs/RuntimeModule.h>

namespace app::classes::types {
    namespace RuntimeModule {
        namespace {
            inline app::RuntimeModule__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeModule__Class** type_info = &type_info_ref;
        inline app::RuntimeModule__Class* get_class() {
            return il2cpp::get_class<app::RuntimeModule__Class>(type_info, "System.Reflection", "RuntimeModule");
        }
        inline app::RuntimeModule* create() {
            return il2cpp::create_object<app::RuntimeModule>(get_class());
        }
    } // namespace RuntimeModule
} // namespace app::classes::types
