#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderRuntimeZShift__Class.h>
#include <Modloader/app/structs/UberShaderRuntimeZShift.h>

namespace app::classes::types {
    namespace UberShaderRuntimeZShift {
        namespace {
            inline app::UberShaderRuntimeZShift__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderRuntimeZShift__Class** type_info = &type_info_ref;
        inline app::UberShaderRuntimeZShift__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeZShift__Class>(type_info, "", "UberShaderRuntimeZShift");
        }
        inline app::UberShaderRuntimeZShift* create() {
            return il2cpp::create_object<app::UberShaderRuntimeZShift>(get_class());
        }
    } // namespace UberShaderRuntimeZShift
} // namespace app::classes::types
