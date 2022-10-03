#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _ArrayPoolLEngineDefault {
        namespace {
            app::_ArrayPoolLEngineDefault__Class* type_info_ref = nullptr;
        }
        app::_ArrayPoolLEngineDefault__Class** type_info = &type_info_ref;
        inline app::_ArrayPoolLEngineDefault__Class* get_class() {
            return il2cpp::get_class<app::_ArrayPoolLEngineDefault__Class>(type_info, "", "_ArrayPoolLEngineDefault");
        }
        inline app::_ArrayPoolLEngineDefault* create() {
            return il2cpp::create_object<app::_ArrayPoolLEngineDefault>(get_class());
        }
    } // namespace _ArrayPoolLEngineDefault
} // namespace app::classes::types
