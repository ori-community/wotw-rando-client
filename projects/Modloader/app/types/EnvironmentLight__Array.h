#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnvironmentLight__Array__Class.h>
#include <Modloader/app/structs/EnvironmentLight__Array.h>

namespace app::classes::types {
    namespace EnvironmentLight__Array {
        namespace {
            inline app::EnvironmentLight__Array__Class* type_info_ref = nullptr;
        }
        inline app::EnvironmentLight__Array__Class** type_info = &type_info_ref;
        inline app::EnvironmentLight__Array__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLight__Array__Class>(type_info, "", "EnvironmentLight[]");
        }
        inline app::EnvironmentLight__Array* create() {
            return il2cpp::create_object<app::EnvironmentLight__Array>(get_class());
        }
    } // namespace EnvironmentLight__Array
} // namespace app::classes::types
