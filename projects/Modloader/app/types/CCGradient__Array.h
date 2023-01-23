#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCGradient__Array__Class.h>
#include <Modloader/app/structs/CCGradient__Array.h>

namespace app::classes::types {
    namespace CCGradient__Array {
        namespace {
            inline app::CCGradient__Array__Class* type_info_ref = nullptr;
        }
        inline app::CCGradient__Array__Class** type_info = &type_info_ref;
        inline app::CCGradient__Array__Class* get_class() {
            return il2cpp::get_class<app::CCGradient__Array__Class>(type_info, "", "CCGradient[]");
        }
        inline app::CCGradient__Array* create() {
            return il2cpp::create_object<app::CCGradient__Array>(get_class());
        }
    } // namespace CCGradient__Array
} // namespace app::classes::types
