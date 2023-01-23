#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BaseEffect__Class.h>
#include <Modloader/app/structs/BaseEffect.h>

namespace app::classes::types {
    namespace BaseEffect {
        namespace {
            inline app::BaseEffect__Class* type_info_ref = nullptr;
        }
        inline app::BaseEffect__Class** type_info = &type_info_ref;
        inline app::BaseEffect__Class* get_class() {
            return il2cpp::get_class<app::BaseEffect__Class>(type_info, "Colorful", "BaseEffect");
        }
        inline app::BaseEffect* create() {
            return il2cpp::create_object<app::BaseEffect>(get_class());
        }
    } // namespace BaseEffect
} // namespace app::classes::types
