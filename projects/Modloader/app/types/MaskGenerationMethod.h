#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaskGenerationMethod__Class.h>
#include <Modloader/app/structs/MaskGenerationMethod.h>

namespace app::classes::types {
    namespace MaskGenerationMethod {
        namespace {
            inline app::MaskGenerationMethod__Class* type_info_ref = nullptr;
        }
        inline app::MaskGenerationMethod__Class** type_info = &type_info_ref;
        inline app::MaskGenerationMethod__Class* get_class() {
            return il2cpp::get_class<app::MaskGenerationMethod__Class>(type_info, "System.Security.Cryptography", "MaskGenerationMethod");
        }
        inline app::MaskGenerationMethod* create() {
            return il2cpp::create_object<app::MaskGenerationMethod>(get_class());
        }
    } // namespace MaskGenerationMethod
} // namespace app::classes::types
