#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialVFXSizePair__Array {
        namespace {
            inline app::MaterialVFXSizePair__Array__Class* type_info_ref = nullptr;
        }
        inline app::MaterialVFXSizePair__Array__Class** type_info = &type_info_ref;
        inline app::MaterialVFXSizePair__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSizePair__Array__Class>(type_info, "", "MaterialVFXSizePair[]");
        }
        inline app::MaterialVFXSizePair__Array* create() {
            return il2cpp::create_object<app::MaterialVFXSizePair__Array>(get_class());
        }
    } // namespace MaterialVFXSizePair__Array
} // namespace app::classes::types
