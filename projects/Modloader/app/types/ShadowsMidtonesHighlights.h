#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShadowsMidtonesHighlights__Class.h>
#include <Modloader/app/structs/ShadowsMidtonesHighlights.h>

namespace app::classes::types {
    namespace ShadowsMidtonesHighlights {
        namespace {
            inline app::ShadowsMidtonesHighlights__Class* type_info_ref = nullptr;
        }
        inline app::ShadowsMidtonesHighlights__Class** type_info = &type_info_ref;
        inline app::ShadowsMidtonesHighlights__Class* get_class() {
            return il2cpp::get_class<app::ShadowsMidtonesHighlights__Class>(type_info, "Colorful", "ShadowsMidtonesHighlights");
        }
        inline app::ShadowsMidtonesHighlights* create() {
            return il2cpp::create_object<app::ShadowsMidtonesHighlights>(get_class());
        }
    } // namespace ShadowsMidtonesHighlights
} // namespace app::classes::types
