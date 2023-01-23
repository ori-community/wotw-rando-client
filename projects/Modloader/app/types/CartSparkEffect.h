#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartSparkEffect__Class.h>
#include <Modloader/app/structs/CartSparkEffect.h>

namespace app::classes::types {
    namespace CartSparkEffect {
        namespace {
            inline app::CartSparkEffect__Class* type_info_ref = nullptr;
        }
        inline app::CartSparkEffect__Class** type_info = &type_info_ref;
        inline app::CartSparkEffect__Class* get_class() {
            return il2cpp::get_class<app::CartSparkEffect__Class>(type_info, "", "CartSparkEffect");
        }
        inline app::CartSparkEffect* create() {
            return il2cpp::create_object<app::CartSparkEffect>(get_class());
        }
    } // namespace CartSparkEffect
} // namespace app::classes::types
