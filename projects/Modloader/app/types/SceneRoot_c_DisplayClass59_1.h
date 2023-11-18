#pragma once
#include <Modloader/app/structs/SceneRoot_c_DisplayClass59_1.h>
#include <Modloader/app/structs/SceneRoot_c_DisplayClass59_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneRoot_c_DisplayClass59_1 {
        inline app::SceneRoot_c_DisplayClass59_1__Class** type_info() {
            static app::SceneRoot_c_DisplayClass59_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneRoot_c_DisplayClass59_1__Class**)(modloader::win::memory::resolve_rva(0x04766A58));
            }
            return cache;
        }
        inline app::SceneRoot_c_DisplayClass59_1__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneRoot_c_DisplayClass59_1__Class>(type_info(), "", "SceneRoot", "<>c__DisplayClass59_1");
        }
        inline app::SceneRoot_c_DisplayClass59_1* create() {
            return il2cpp::create_object<app::SceneRoot_c_DisplayClass59_1>(get_class());
        }
    } // namespace SceneRoot_c_DisplayClass59_1
} // namespace app::classes::types
