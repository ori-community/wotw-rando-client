#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenerateAOTDataAttribute {
        namespace {
            inline app::GenerateAOTDataAttribute__Class* type_info_ref = nullptr;
        }
        inline app::GenerateAOTDataAttribute__Class** type_info = &type_info_ref;
        inline app::GenerateAOTDataAttribute__Class* get_class() {
            return il2cpp::get_class<app::GenerateAOTDataAttribute__Class>(type_info, "Moon", "GenerateAOTDataAttribute");
        }
        inline app::GenerateAOTDataAttribute* create() {
            return il2cpp::create_object<app::GenerateAOTDataAttribute>(get_class());
        }
    } // namespace GenerateAOTDataAttribute
} // namespace app::classes::types
