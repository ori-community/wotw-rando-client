#pragma once
#include <Modloader/app/structs/_ArrayPoolLEngineDefault.h>
#include <Modloader/app/structs/_ArrayPoolLEngineDefault__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _ArrayPoolLEngineDefault {
        inline app::_ArrayPoolLEngineDefault__Class** type_info() {
            static app::_ArrayPoolLEngineDefault__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_ArrayPoolLEngineDefault__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_ArrayPoolLEngineDefault__Class* get_class() {
            return il2cpp::get_class<app::_ArrayPoolLEngineDefault__Class>(type_info(), "", "_ArrayPoolLEngineDefault");
        }
        inline app::_ArrayPoolLEngineDefault* create() {
            return il2cpp::create_object<app::_ArrayPoolLEngineDefault>(get_class());
        }
    } // namespace _ArrayPoolLEngineDefault
} // namespace app::classes::types
