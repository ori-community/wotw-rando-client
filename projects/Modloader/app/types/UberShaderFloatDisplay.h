#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderFloatDisplay__Class.h>
#include <Modloader/app/structs/UberShaderFloatDisplay.h>

namespace app::classes::types {
    namespace UberShaderFloatDisplay {
        namespace {
            inline app::UberShaderFloatDisplay__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderFloatDisplay__Class** type_info = &type_info_ref;
        inline app::UberShaderFloatDisplay__Class* get_class() {
            return il2cpp::get_class<app::UberShaderFloatDisplay__Class>(type_info, "", "UberShaderFloatDisplay");
        }
        inline app::UberShaderFloatDisplay* create() {
            return il2cpp::create_object<app::UberShaderFloatDisplay>(get_class());
        }
    } // namespace UberShaderFloatDisplay
} // namespace app::classes::types
