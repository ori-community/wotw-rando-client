#pragma once
#include <Modloader/app/structs/AttributeHelperEngine.h>
#include <Modloader/app/structs/AttributeHelperEngine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeHelperEngine {
        inline app::AttributeHelperEngine__Class** type_info() {
            static app::AttributeHelperEngine__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttributeHelperEngine__Class**)(modloader::win::memory::resolve_rva(0x0477B880));
            }
            return cache;
        }
        inline app::AttributeHelperEngine__Class* get_class() {
            return il2cpp::get_class<app::AttributeHelperEngine__Class>(type_info(), "UnityEngine", "AttributeHelperEngine");
        }
        inline app::AttributeHelperEngine* create() {
            return il2cpp::create_object<app::AttributeHelperEngine>(get_class());
        }
    } // namespace AttributeHelperEngine
} // namespace app::classes::types
