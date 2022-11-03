#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyUberTransformFollow {
        namespace {
            inline app::LegacyUberTransformFollow__Class* type_info_ref = nullptr;
        }
        inline app::LegacyUberTransformFollow__Class** type_info = &type_info_ref;
        inline app::LegacyUberTransformFollow__Class* get_class() {
            return il2cpp::get_class<app::LegacyUberTransformFollow__Class>(type_info, "", "LegacyUberTransformFollow");
        }
        inline app::LegacyUberTransformFollow* create() {
            return il2cpp::create_object<app::LegacyUberTransformFollow>(get_class());
        }
    } // namespace LegacyUberTransformFollow
} // namespace app::classes::types
