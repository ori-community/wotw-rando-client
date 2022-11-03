#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderTextureBase_SubBindIdCache {
        namespace {
            inline app::UberShaderTextureBase_SubBindIdCache__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderTextureBase_SubBindIdCache__Class** type_info = &type_info_ref;
        inline app::UberShaderTextureBase_SubBindIdCache__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderTextureBase_SubBindIdCache__Class>(type_info, "", "UberShaderTextureBase", "SubBindIdCache");
        }
        inline app::UberShaderTextureBase_SubBindIdCache* create() {
            return il2cpp::create_object<app::UberShaderTextureBase_SubBindIdCache>(get_class());
        }
        inline app::UberShaderTextureBase_SubBindIdCache__Boxed* box(app::UberShaderTextureBase_SubBindIdCache value) {
            return il2cpp::box_value<app::UberShaderTextureBase_SubBindIdCache__Boxed>(get_class(), value);
        }
        inline app::UberShaderTextureBase_SubBindIdCache__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderTextureBase_SubBindIdCache__Array>(get_class(), size);
        }
        inline app::UberShaderTextureBase_SubBindIdCache__Array* create_array(const std::vector<app::UberShaderTextureBase_SubBindIdCache>& items) {
            return il2cpp::array_new<app::UberShaderTextureBase_SubBindIdCache__Array>(get_class(), items);
        }
    } // namespace UberShaderTextureBase_SubBindIdCache
} // namespace app::classes::types
