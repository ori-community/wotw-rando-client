#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CC_FastVignette {
        namespace {
            inline app::CC_FastVignette__Class* type_info_ref = nullptr;
        }
        inline app::CC_FastVignette__Class** type_info = &type_info_ref;
        inline app::CC_FastVignette__Class* get_class() {
            return il2cpp::get_class<app::CC_FastVignette__Class>(type_info, "", "CC_FastVignette");
        }
        inline app::CC_FastVignette* create() {
            return il2cpp::create_object<app::CC_FastVignette>(get_class());
        }
    } // namespace CC_FastVignette
} // namespace app::classes::types
