#pragma once
#include <Modloader/app/structs/AssetReferenceChoiceAttribute.h>
#include <Modloader/app/structs/AssetReferenceChoiceAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetReferenceChoiceAttribute {
        inline app::AssetReferenceChoiceAttribute__Class** type_info() {
            static app::AssetReferenceChoiceAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetReferenceChoiceAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetReferenceChoiceAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssetReferenceChoiceAttribute__Class>(type_info(), "", "AssetReferenceChoiceAttribute");
        }
        inline app::AssetReferenceChoiceAttribute* create() {
            return il2cpp::create_object<app::AssetReferenceChoiceAttribute>(get_class());
        }
    } // namespace AssetReferenceChoiceAttribute
} // namespace app::classes::types
