#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransparancyAnimatorModifier__Class.h>
#include <Modloader/app/structs/TransparancyAnimatorModifier.h>

namespace app::classes::types {
    namespace TransparancyAnimatorModifier {
        namespace {
            inline app::TransparancyAnimatorModifier__Class* type_info_ref = nullptr;
        }
        inline app::TransparancyAnimatorModifier__Class** type_info = &type_info_ref;
        inline app::TransparancyAnimatorModifier__Class* get_class() {
            return il2cpp::get_class<app::TransparancyAnimatorModifier__Class>(type_info, "", "TransparancyAnimatorModifier");
        }
        inline app::TransparancyAnimatorModifier* create() {
            return il2cpp::create_object<app::TransparancyAnimatorModifier>(get_class());
        }
    } // namespace TransparancyAnimatorModifier
} // namespace app::classes::types
