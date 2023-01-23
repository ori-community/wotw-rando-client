#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderWorldProperty__Array__Class.h>
#include <Modloader/app/structs/UberShaderWorldProperty__Array.h>

namespace app::classes::types {
    namespace UberShaderWorldProperty__Array {
        namespace {
            inline app::UberShaderWorldProperty__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderWorldProperty__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderWorldProperty__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldProperty__Array__Class>(type_info, "", "UberShaderWorldProperty[]");
        }
        inline app::UberShaderWorldProperty__Array* create() {
            return il2cpp::create_object<app::UberShaderWorldProperty__Array>(get_class());
        }
    } // namespace UberShaderWorldProperty__Array
} // namespace app::classes::types
