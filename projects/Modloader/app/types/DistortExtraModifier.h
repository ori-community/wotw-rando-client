#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DistortExtraModifier__Class.h>
#include <Modloader/app/structs/DistortExtraModifier.h>

namespace app::classes::types {
    namespace DistortExtraModifier {
        namespace {
            inline app::DistortExtraModifier__Class* type_info_ref = nullptr;
        }
        inline app::DistortExtraModifier__Class** type_info = &type_info_ref;
        inline app::DistortExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::DistortExtraModifier__Class>(type_info, "", "DistortExtraModifier");
        }
        inline app::DistortExtraModifier* create() {
            return il2cpp::create_object<app::DistortExtraModifier>(get_class());
        }
    } // namespace DistortExtraModifier
} // namespace app::classes::types
