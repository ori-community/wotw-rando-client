#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberAssetPrewarmContainer {
        namespace {
            app::UberAssetPrewarmContainer__Class* type_info_ref = nullptr;
        }
        app::UberAssetPrewarmContainer__Class** type_info = &type_info_ref;
        inline app::UberAssetPrewarmContainer__Class* get_class() {
            return il2cpp::get_class<app::UberAssetPrewarmContainer__Class>(type_info, "UberShader.optimizations", "UberAssetPrewarmContainer");
        }
        inline app::UberAssetPrewarmContainer* create() {
            return il2cpp::create_object<app::UberAssetPrewarmContainer>(get_class());
        }
    } // namespace UberAssetPrewarmContainer
} // namespace app::classes::types
