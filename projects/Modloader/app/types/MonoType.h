#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoType__Class.h>
#include <Modloader/app/structs/MonoType.h>

namespace app::classes::types {
    namespace MonoType {
        namespace {
            inline app::MonoType__Class* type_info_ref = nullptr;
        }
        inline app::MonoType__Class** type_info = &type_info_ref;
        inline app::MonoType__Class* get_class() {
            return il2cpp::get_class<app::MonoType__Class>(type_info, "System", "MonoType");
        }
        inline app::MonoType* create() {
            return il2cpp::create_object<app::MonoType>(get_class());
        }
    } // namespace MonoType
} // namespace app::classes::types
