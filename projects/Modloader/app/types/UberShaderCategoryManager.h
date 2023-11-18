#pragma once
#include <Modloader/app/structs/UberShaderCategoryManager.h>
#include <Modloader/app/structs/UberShaderCategoryManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCategoryManager {
        inline app::UberShaderCategoryManager__Class** type_info() {
            static app::UberShaderCategoryManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderCategoryManager__Class**)(modloader::win::memory::resolve_rva(0x047530C0));
            }
            return cache;
        }
        inline app::UberShaderCategoryManager__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategoryManager__Class>(type_info(), "", "UberShaderCategoryManager");
        }
        inline app::UberShaderCategoryManager* create() {
            return il2cpp::create_object<app::UberShaderCategoryManager>(get_class());
        }
    } // namespace UberShaderCategoryManager
} // namespace app::classes::types
