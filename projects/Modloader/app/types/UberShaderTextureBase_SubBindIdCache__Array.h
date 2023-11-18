#pragma once
#include <Modloader/app/structs/UberShaderTextureBase_SubBindIdCache__Array.h>
#include <Modloader/app/structs/UberShaderTextureBase_SubBindIdCache__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderTextureBase_SubBindIdCache__Array {
        inline app::UberShaderTextureBase_SubBindIdCache__Array__Class** type_info() {
            static app::UberShaderTextureBase_SubBindIdCache__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderTextureBase_SubBindIdCache__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderTextureBase_SubBindIdCache__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTextureBase_SubBindIdCache__Array__Class>(type_info(), "", "UberShaderTextureBase+SubBindIdCache[]");
        }
        inline app::UberShaderTextureBase_SubBindIdCache__Array* create() {
            return il2cpp::create_object<app::UberShaderTextureBase_SubBindIdCache__Array>(get_class());
        }
    } // namespace UberShaderTextureBase_SubBindIdCache__Array
} // namespace app::classes::types
