#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShuoldShowHDROptionCondition__Class.h>
#include <Modloader/app/structs/ShuoldShowHDROptionCondition.h>

namespace app::classes::types {
    namespace ShuoldShowHDROptionCondition {
        namespace {
            inline app::ShuoldShowHDROptionCondition__Class* type_info_ref = nullptr;
        }
        inline app::ShuoldShowHDROptionCondition__Class** type_info = &type_info_ref;
        inline app::ShuoldShowHDROptionCondition__Class* get_class() {
            return il2cpp::get_class<app::ShuoldShowHDROptionCondition__Class>(type_info, "", "ShuoldShowHDROptionCondition");
        }
        inline app::ShuoldShowHDROptionCondition* create() {
            return il2cpp::create_object<app::ShuoldShowHDROptionCondition>(get_class());
        }
    } // namespace ShuoldShowHDROptionCondition
} // namespace app::classes::types
