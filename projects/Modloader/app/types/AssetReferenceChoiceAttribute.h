#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AssetReferenceChoiceAttribute__Class.h>
#include <Modloader/app/structs/AssetReferenceChoiceAttribute.h>

namespace app::classes::types {
    namespace AssetReferenceChoiceAttribute {
        namespace {
            inline app::AssetReferenceChoiceAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssetReferenceChoiceAttribute__Class** type_info = &type_info_ref;
        inline app::AssetReferenceChoiceAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssetReferenceChoiceAttribute__Class>(type_info, "", "AssetReferenceChoiceAttribute");
        }
        inline app::AssetReferenceChoiceAttribute* create() {
            return il2cpp::create_object<app::AssetReferenceChoiceAttribute>(get_class());
        }
    } // namespace AssetReferenceChoiceAttribute
} // namespace app::classes::types
