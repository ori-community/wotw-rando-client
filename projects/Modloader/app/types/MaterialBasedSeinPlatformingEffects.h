#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedSeinPlatformingEffects {
        namespace {
            inline app::MaterialBasedSeinPlatformingEffects__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedSeinPlatformingEffects__Class** type_info = &type_info_ref;
        inline app::MaterialBasedSeinPlatformingEffects__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinPlatformingEffects__Class>(type_info, "", "MaterialBasedSeinPlatformingEffects");
        }
        inline app::MaterialBasedSeinPlatformingEffects* create() {
            return il2cpp::create_object<app::MaterialBasedSeinPlatformingEffects>(get_class());
        }
        inline app::MaterialBasedSeinPlatformingEffects__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialBasedSeinPlatformingEffects__Array>(get_class(), size);
        }
        inline app::MaterialBasedSeinPlatformingEffects__Array* create_array(const std::vector<app::MaterialBasedSeinPlatformingEffects*>& items) {
            return il2cpp::array_new<app::MaterialBasedSeinPlatformingEffects__Array>(get_class(), items);
        }
    } // namespace MaterialBasedSeinPlatformingEffects
} // namespace app::classes::types
