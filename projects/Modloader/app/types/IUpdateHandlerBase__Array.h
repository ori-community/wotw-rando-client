#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IUpdateHandlerBase__Array__Class.h>
#include <Modloader/app/structs/IUpdateHandlerBase__Array.h>

namespace app::classes::types {
    namespace IUpdateHandlerBase__Array {
        namespace {
            inline app::IUpdateHandlerBase__Array__Class* type_info_ref = nullptr;
        }
        inline app::IUpdateHandlerBase__Array__Class** type_info = &type_info_ref;
        inline app::IUpdateHandlerBase__Array__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandlerBase__Array__Class>(type_info, "Moon", "IUpdateHandlerBase[]");
        }
        inline app::IUpdateHandlerBase__Array* create() {
            return il2cpp::create_object<app::IUpdateHandlerBase__Array>(get_class());
        }
    } // namespace IUpdateHandlerBase__Array
} // namespace app::classes::types
