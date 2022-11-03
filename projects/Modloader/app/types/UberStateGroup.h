#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateGroup {
        namespace {
            inline app::UberStateGroup__Class* type_info_ref = nullptr;
        }
        inline app::UberStateGroup__Class** type_info = &type_info_ref;
        inline app::UberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::UberStateGroup__Class>(type_info, "Moon", "UberStateGroup");
        }
        inline app::UberStateGroup* create() {
            return il2cpp::create_object<app::UberStateGroup>(get_class());
        }
    } // namespace UberStateGroup
} // namespace app::classes::types
